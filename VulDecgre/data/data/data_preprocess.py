import gzip
import jsonlines
from gensim.models import word2vec, Word2Vec
import re
import numpy as np
import json
from sklearn import decomposition
import os
from shutil import copyfile


def filterNodes(list, num):#根据节点的阈值，过滤掉列表中第一个和第二个元素都小于该阈值的节点。返回过滤后的节点列表。
    list_new = []
    if len(list) == 0:
        return list_new
    for i in range(len(list)):
        l1 = list[i][0]
        l2 = list[i][1]
        if (l1 < num) & (l2 < num):
            list_new.append(list[i])

    return list_new


def mkdir(path):#创建文件
    import os
    path = path.strip()
    path = path.rstrip("\\")

    isExists = os.path.exists(path)
    if not isExists:
        os.makedirs(path)
        print(path + ' is ready now')
        return True
    else:
        print(path + ' already exists')
        return False

def w2v(filename, cwetype):#作用是根据给定的文件路径，从文件中提取结点并训练生成Word2Vec模型，然后将模型保存到文件中。
    # check if '../data/data/word2vec_CWE-399.pkl' already exists.
    if os.path.exists(os.path.split(filename)[0] + "/" + "word2vec_" + str(cwetype) + ".pkl"):
        print("Word2Vec already exists.")
        return
    # if not,...
    print("generating word2vec...")
    words = []#初始化一个空列表 words，用于存储从文件中提取的节点。
    for root, dirs, files in os.walk(filename):#遍历指定路径下的所有文件和子目录
        # shuffle files randomly 随机打乱文件
        np.random.shuffle(files)#对文件列表进行随机打乱，以便在节点提取时具有随机性。
        for file in files:#循环遍历文件列表中的每个文件
            flag_vec = 0#设置一个标志变量flag_vec为0，用于标记是否进入节点提取阶段
            word = []#初始化一个空列表 word，用于暂时存储每个节点的信息。
            with open(os.path.join(root + "/" + file), "r") as f:
                for line in f.readlines():
                    if "-" * 20 in line:#如果当前行包含连续 20 个 "-" 字符，则表示遇到了节点提取阶段的分隔符，将 flag_vec 设置为 1，表示进入节点提取阶段。
                        flag_vec = 1

                    if flag_vec == 1:#如果 flag_vec 的值为 1，表示当前处于节点提取阶段。
                        if "^" * 20 in line:#如果当前行包含连续 20 个 "^" 字符，则表示遇到了节点提取阶段的结束标志，将节点添加到 words 列表中。
                            for i in word:
                                words.append(i)
                        # if not None
                        if re.search('(?<=,).*', line):#使用正则表达式提取节点数据，将其添加到word列表中。
                            word.append(re.search('(?<=,).*', line).group().split(')')[0].split(" "))  # 将token加入数组
    print(f'this is words: {words}')# 使用words列表训练一个Word2Vec模型，并设置一些参数
    model = Word2Vec(words, min_count=1, size=100, sg=1, window=5,
                     negative=3, sample=0.001, hs=1, workers=4)#使用列表 words 训练一个 Word2Vec 模型，并设置了一些参数
    # a=model.wv.vocab
    # for k in a:
    #     print(k)
    model.save(os.path.split(filename)[0] + "/" + "word2vec_" + str(cwetype) + ".pkl")#将训练好的 Word2Vec 模型保存到文件中，文件名由路径中的目录部分和 "word2vec_" + str(cwetype) + ".pkl" 组成
    print("Word2Vec is ready")


def GetInfor(filename):
    print("\ngenerating vectors files...")#生成向量文件
    random_use = np.random.rand(100)#生成一个大小为 100 的随机向量 random_use，用于在无法获取节点向量时使用。
    #使用 os.walk 遍历指定目录 filename 下的所有文件和子目录，并返回根目录路径、子目录列表和文件列表。
    for root, dirs, files in os.walk(filename):
        count = 0#计数器 count，并对文件列表 files 进行随机打乱，以确保数据的随机性
        np.random.shuffle(files)
        for fname in files:#遍历文件名
            #初始化多个空列表，用于存储不同类型的边信息。
            # ast
            adj_child = []
            adj_next = []
            adj_com = []
            adj_guared = []
            adj_lexical = []
            # adj_jump = []
            adj_type = []
            adj_parameter = []

            # cdfg
            adj_cdfg_a = []
            adj_cdfg_c = []
            adj_cdfg_p = []

            # initialize 初始化多个布尔变量，用于标记当前处理的信息类型。
            label_label = False  # label
            label_child = False  # child
            label_next = False  # next_token
            label_from = False  # compute_form
            label_by = False  # garde_by
            label_negation = False  # garde_negation
            label_att = False  # node_attribute
            label_use = False  # Lexical_use
            label_type = False # Type_information
            label_parameter = False #Parameter_Dependencies
            # label_jump = False  # jump
            label_joern = False  # cdfg
            label_joern_word = False  # joern_word
            joern_word = []

            #打开当前文件 fname 并读取所有行，然后逐行处理。
            with open(root + '/' + fname, "r") as f:
                data = f.readlines()
                for line in data:
                    if (line.strip().find("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^") >= 0):  # end of lines 如果当前行包含 "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"，表示当前文件信息处理结束，退出循环。
                        break
                    nodes = line.split('\n')[0].split(',')#将当前行按逗号进行分割，得到节点列表 nodes。
                    if (line.find("-----label-----") >= 0):#如果当前行包含 "-----label-----"，表示下面的信息是标签信息，将 label_label 设为 True 并跳过当前循环。
                        label_label = True
                        continue
                    if (label_label):#如果 label_label 为 True，说明当前行是标签信息的内容，将标签信息保存到 label_single 变量中，并将 label_label 设为 False。
                        label_single = line.strip()
                        label_label = False
                        continue
                    #如果当前行包含 "-----children-----"，表示下面的信息是子节点信息，将 label_child 设为 True 并跳过当前循环。
                    if (line.find("-----children-----") >= 0):
                        label_child = True
                        continue
                    if (label_child):#如果 label_child 为 True，说明当前行是叶子节点信息的内容，将节点信息添加到 adj_child 列表中。
                        if line.find("-----nextToken-----") >= 0:
                            label_child = False
                        else:
                            adj_child.append((int(nodes[0]), int(nodes[1])))
                        # print(adj_child)
                    #如果当前行包含 "-----nextToken-----"，表示下面的信息是下一个节点信息，将 label_next 设为 True 并跳过当前循环。
                    if (line.find("-----nextToken-----") >= 0):
                        label_next = True
                        continue
                    #如果 label_next 为 True，说明当前行是下一个节点信息的内容，将边信息添加到 adj_next 列表中。
                    if (label_next):
                        if line.find("-----computeFrom-----") >= 0:
                            label_next = False
                        else:
                            for i in range(len(nodes)):
                                if i != len(nodes) - 1:
                                    adj_next.append((int(nodes[i]), int(nodes[i + 1])))
                    #如果当前行包含 "-----computeFrom-----"，表示下面的信息是计算来源信息，将 label_from 设为 True 并跳过当前循环。
                    if (line.find("-----computeFrom-----") >= 0):
                        label_from = True
                        continue
                    #如果 label_from 为 True，说明当前行是计算来源信息的内容，将边信息添加到 adj_com 列表中
                    if (label_from):
                        if line.find("-----guardedBy-----") >= 0:
                            label_from = False
                        else:
                            adj_com.append((int(nodes[0]), int(nodes[1])))
                    #如果当前行包含 "-----guardedBy-----"，表示下面的信息是守卫边信息，将 label_by 设为 True 并跳过当前循环。
                    if (line.find("-----guardedBy-----") >= 0):
                        label_by = True
                        continue
                    #如果 label_by 为 True，说明当前行是守卫边信息的内容，将边信息添加到 adj_guared 列表中。
                    if (label_by):
                        if line.find("-----guardedByNegation-----") >= 0:
                            label_by = False
                        else:
                            adj_guared.append((int(nodes[0]), int(nodes[1])))

                    if (line.find("-----guardedByNegation-----") >= 0):
                        label_negation = True
                        continue
                    #如果 label_negation 为 True，说明当前行guardedByNegation信息的内容，将边信息添加到 adj_guared 列表中。
                    if (label_negation):
                        if line.find("-----lastLexicalUse-----") >= 0:
                            label_negation = False
                        else:
                            adj_guared.append((int(nodes[0]), int(nodes[1])))
                    #如果当前行包含 "-----lastLexicalUse-----"，表示下面的信息是最后一个词汇使用边信息，将 label_use 设为 True 并跳过当前循环。
                    if (line.find("-----lastLexicalUse-----") >= 0):
                        label_use = True
                        continue
                    #如果 label_use 为 True，说明当前行是最后一个词汇使用边信息的内容，将边信息添加到 adj_lexical 列表中。
                    if (label_use):
                        if line.find("-----attribute-----") >= 0:
                            label_use = False
                        else:
                            adj_lexical.append((int(nodes[0]), int(nodes[1])))
                    if (line.find("-----attribute-----") >= 0):
                        label_att = True
                        continue
                    #如果 label_att 为 True，说明当前行是属性信息的内容，将属性信息转换为数字列表 num。
                    if (label_att):
                        if line.find("-----TypeInformation-----") >= 0:
                            label_att = False
                        else:
                            num = line.strip().split(';')
                            for x in num:
                                if (x == "" or x == '\n'):
                                    num.remove(x)#num得到attribute的各个token作为列表

                    # 如果当前行包含 "-----TypeInformation-----"，表示下面的信息是类型信息，将 label_type 设为 True 并跳过当前循环。
                    if (line.find("-----TypeInformation-----") >= 0):
                        label_type = True
                        continue
                    if (label_type):
                        if line.find("-----ParameterDependencies-----") >= 0:
                            label_type = False
                        else:
                            if len(nodes) > 0 and nodes[0].isdigit():
                                adj_type.append((int(nodes[0]), int(nodes[0])))
                            else:
                                pass

                    # 如果当前行包含 "-----TypeInformation-----"，表示下面的信息是类型信息，将 label_type 设为 True 并跳过当前循环。
                    if (line.find("-----ParameterDependencies-----") >= 0):
                        label_parameter = True
                        continue
                    #如果 label_parameter 为 True，说明当前行是最后一个词汇使用参数依赖的内容，将类型信息添加到adj_parameter列表中。
                    if (label_parameter):
                        if line.find("-----ast_node-----") >= 0:
                            label_parameter = False
                        else:
                            adj_parameter.append((int(nodes[0]), int(nodes[1])))
                    # print(adj_parameter)

                    #如果当前行包含 "-----joern-----"，表示下面的信息是 Joern 图信息，将 label_joern 设为 True 并跳过当前循环。
                    if (line.find("-----joern-----") >= 0):
                        label_joern = True
                        continue
                    #如果 label_joern 为 True，说明当前行是 Joern 图信息的内容，将信息分割成三元组并存储在 threedot 中。
                    if (label_joern):
                        if line.find("-----------------------------------") >= 0:#说明没有joern内容
                            label_joern = False
                        else:
                            threedot = line.strip().split("(")[1].split(")")[0].split(",")  # joern三图信息分割成三元组
                            #尝试将三元组中的节点信息转换为整数，并根据三元组中的第三个元素将边信息添加到不同类型的列表 adj_cdfg_a、adj_cdfg_c 或 adj_cdfg_p 中。
                            try:
                                adj_single = (int(threedot[0]), int(threedot[1]))#分别写入ast、cfg、pdg图
                                if int(threedot[2]) == 0:
                                    adj_cdfg_a.append(adj_single)
                                    continue
                                if int(threedot[2]) == 1:
                                    adj_cdfg_c.append(adj_single)
                                    continue
                                if int(threedot[2]) == 2:
                                    adj_cdfg_p.append(adj_single)
                                    continue
                            except Exception as e:
                                print("joern nodes occur errors")
                                print(e)
                                continue
                    #如果当前行包含 "-----------------------------------"，表示下面的信息是 Joern 图的节点信息，将 label_joern_word 设为 True 并跳过当前循环。
                    if line.find("-----------------------------------") >= 0:
                        label_joern_word = True
                        continue
                    if (label_joern_word):
                        if re.search('(?<=,).*', line):#使用正则表达式提取节点数据，将其添加到joern_word列表中。
                            joern_word.append(re.search('(?<=,).*', line).group().split(')')[0])#匹配值内容
            # nodes of ast need to be smaller than len(attribute)
            # 计算节点特征向量的长度 adj_len，然后对各种类型的边信息进行过滤操作，确保边连接的节点在节点特征向量范围内。
            adj_len = len(num)
            adj_child = filterNodes(adj_child, adj_len)
            adj_next = filterNodes(adj_next, adj_len)
            adj_com = filterNodes(adj_com, adj_len)
            adj_guared = filterNodes(adj_guared, adj_len)
            adj_lexical = filterNodes(adj_lexical, adj_len)
            adj_type = filterNodes(adj_type,adj_len)
            # adj_jump = filterNodes(adj_jump, adj_len)
            adj_parameter = filterNodes(adj_parameter,adj_len)

            # vectors of cdfg 使用模型将输入的文本中的cdfg数据转换为向量表示。
            vectors_cdfg = []
            model = word2vec.Word2Vec.load(#导入训练好的word2vec模型
                os.path.split(filename)[0] + "/word2vec_" + str(os.path.split(filename)[1]) + '.pkl')

            for i in range(len(joern_word)):#遍历joern_word列表（结点数据）中的每个元素，将其拆分为单词列表word_single
                word_single = joern_word[i].split(" ")#拆分成单词列表 word_single
                try:
                    vector = model.wv[word_single]#尝试从模型中获取word_single对应的向量
                except:
                    vector = np.reshape(random_use, (1, 100))#如果找不到则使用预定义的random_use向量进行替代。
                if np.size(vector) > 100:#如果向量的大小大于100，则进行降维操作，使用KernelPCA将向量降至100维。
                    vector = vector.T
                    kpca = decomposition.KernelPCA(kernel='rbf', gamma=10, n_components=1)
                    vector = kpca.fit_transform(vector).T
                vector = vector[-1, 0:100]
                vectors_cdfg.append(vector.tolist())#将处理后的向量添加到vectors_cdfg列表中。

            # vectors of ast将AST转换为向量表示
            vectors_ast = []#定义空列表vectors_ast用于存储AST图的节点特征向量。
            print(f"this is our_map_all {os.path.split(filename)[0] }/our_map_all.txt ")#/our_map_all.txt是所有可能的属性表示的向量
            with open(os.path.split(filename)[0] + "/our_map_all.txt", "r") as f:#打开文件<文件路径>/our_map_all.txt，读取文件内容并将单引号替换为双引号。
                s = f.read()
                s = s.replace('\'', '\"')
                mapping = json.loads(json.dumps(eval(s)))#使用json.loads(json.dumps(eval(s)))将字符串转换为字典对象，存储在mapping变量中
            for i in range(len(num)):#使用循环遍历num列表的索引。
                word_single = num[i]#对于每个索引，将num[i]作为键从mapping字典中获取对应的向量。
                try:
                    vector = mapping[word_single]#将所有的AST节点转变为向量
                except:#如果获取失败，则将random_use转换为列表形式，并将其作为默认向量。
                    vector = random_use.tolist()
                # vector = vector[-1, 0:99]
                vectors_ast.append(vector)#将获取到的向量添加到vectors_ast列表中
            #并将标签信息转换为浮点数并保存到label变量中
            label = int(label_single) + 0.0

            # 边整合到一个列表里
            # 定义空列表adj_ast_total，adj_cdfg_total和adj_auxiliaryInput_total，用于存储AST图、CDFG图和辅助输入的边信息
            adj_ast_total = []
            adj_single = [adj_child, adj_com, adj_next, adj_guared, adj_lexical]# 将各种类型的边列表（如adj_child、adj_com等）组合成单个列表adj_single，并将其添加到对应的列表中。
            adj_ast_total.append(adj_single)

            adj_cdfg_total = []
            adj_single = [adj_cdfg_a, adj_cdfg_c, adj_cdfg_p]
            adj_cdfg_total.append(adj_single)#代码属性图

            adj_auxiliaryInput_total = []# adj_auxiliaryInput_total将包含辅助输入的边信息。
            adj_single = [adj_cdfg_a, adj_cdfg_c, adj_cdfg_p]
            adj_auxiliaryInput_total.append(adj_single)

            # store
            #使用jsonlines.open打开文件<文件路径>/<文件名>_ast.jsonl，以追加模式写入数据。将节点特征向量vectors_ast和AST图的边信息adj_ast_total写入JSONL文件中，同时附带属性Property。
            with jsonlines.open(os.path.split(filename)[0] + '/' + str(os.path.split(filename)[1]) + '_ast.jsonl',
                                mode='a') as writer:
                writer.write(
                    {"Property": label, "graph": {"node_features": vectors_ast, "adjacency_lists": adj_ast_total[0]}})#写入标签和图节点类型向量和AST边信息
            with jsonlines.open(os.path.split(filename)[0] + '/' + str(os.path.split(filename)[1]) + '_cdfg.jsonl',
                                mode='a') as writer:
                writer.write(
                    {"Property": label, "graph": {"node_features": vectors_cdfg, "adjacency_lists": adj_cdfg_total[0]}})#写入标签和图节点值向量和代码属性图边邻接关系

            # show process 显示处理进度
            count = count + 1
            print("\rprocess : {:.2f}".format((count / (1.0 * files.__len__()) * 100)) + "%",end=' ')

# spilt and zip
# warning: samples cant be less than 200, otherwise spliting process will occur errors.

#将所有ast以及cdfg数据全部放入test.jsonl.gz 并将test.jsonl.gz复制到train.jsonl.gz和valid.jsonl.gz  predict只输入test.json数据即可
def Split_predict(path):
    print("\nbegin to split files...")

    """
    -------------AST---------------
    """
    tem_ast = []
    mkdir(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/ast')
    with open(os.path.split(path)[0] + '/' + str(os.path.split(path)[1]) + '_ast.jsonl', "r+", encoding="utf8") as f:
        for item in jsonlines.Reader(f):
            tem_ast.append(item)
    tem_test=tem_ast
    path_tem = os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/ast/ast.jsonl'

    for i in tem_test:
        with jsonlines.open(path_tem,
                            mode='a') as writer:
            writer.write(i)
    # zip
    f_in = open(path_tem, 'rb')
    f_out = gzip.open(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/ast/test.jsonl.gz', 'wb')
    f_out.writelines(f_in)
    f_out.close()
    f_in.close()
    os.remove(path_tem)

    testPath=os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/ast/test.jsonl.gz'
    trainPath=os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/ast/train.jsonl.gz'
    validPath=os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/ast/valid.jsonl.gz'
    copyfile(testPath, trainPath)
    copyfile(testPath, validPath)


    """
    -------------CDFG---------------
    """

    tem_cdfg = []
    mkdir(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/cdfg')

    with open(os.path.split(path)[0] + '/' + str(os.path.split(path)[1]) + '_cdfg.jsonl', "r+", encoding="utf8") as f:
        for item in jsonlines.Reader(f):
            tem_cdfg.append(item)

    tem_test=tem_cdfg
    path_tem = os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/cdfg/cdfg.jsonl'

    for i in tem_test:
        with jsonlines.open(path_tem,
                            mode='a') as writer:
            writer.write(i)

    # zip
    f_in = open(path_tem, 'rb')
    # print(os.getcwd())
    f_out = gzip.open(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/cdfg/test.jsonl.gz', 'wb')
    f_out.writelines(f_in)
    f_out.close()
    f_in.close()
    os.remove(path_tem)

    testPath = os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/cdfg/test.jsonl.gz'
    trainPath = os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/cdfg/train.jsonl.gz'
    validPath = os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/cdfg/valid.jsonl.gz'
    copyfile(testPath, trainPath)
    copyfile(testPath, validPath)

def Split(train, valid, test, path):#参数为训练集、验证集、测试集所占比例和AST、CDFG路径
    print("\nbegin to split files...")

    """
    -------------AST---------------
    """
    # 初始化一个空列表 tem_ast，用于暂存从原始 .jsonl 文件中读取的数据。
    tem_ast = []
    #创建一个名为 tem_数据集名称/ast 的目录，用于保存划分后的 AST（抽象语法树）数据
    mkdir(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/ast')
    #打开原始 AST JSONL 文件，读取其中的数据，并将每个数据项添加到 tem_ast 列表中
    with open(os.path.split(path)[0] + '/' + str(os.path.split(path)[1]) + '_ast.jsonl', "r+", encoding="utf8") as f:
        for item in jsonlines.Reader(f):
            tem_ast.append(item)
    # 1:1
    # randomtem=np.arange(len(tem_ast))
    randomtem = np.arange(len(tem_ast))
    pos_tem = []
    neg_tem = []
    #pos_tem 存储 "Property" 值为非零的数据项，neg_tem 存储 "Property" 值为零的数据项
    for step, i in enumerate(randomtem):
        ast = tem_ast[i]
        if ast['Property'] == 0:
            neg_tem.append(ast)
        else:
            pos_tem.append(ast)

    #确保正例和负例具有相同数量的样本，通过截断较长的集合，取长度 length 。
    length = min(len(pos_tem), len(neg_tem))
    neg_tem = neg_tem[:length]
    pos_tem = pos_tem[:length]
    #创建训练集 tem_train，其中包含 train 比例的负例和正例数据，并随机打乱训练集。
    tem_train = neg_tem[:int(length * train)] + pos_tem[:int(length * train)]
    np.random.shuffle(tem_train)
    tem_valid = (neg_tem[int(length * train):int(length * (train + valid))]) + (
        pos_tem[int(length * train):int(length * (train + valid))])
    np.random.shuffle(tem_valid)
    tem_test = (neg_tem[int(length * (train + valid)):]) + (pos_tem[int(length * (train + valid)):])
    np.random.shuffle(tem_test)
    # tem=tem_train+tem_valid+tem_test
    #将训练集 tem_train 的数据写入一个临时 JSONL文件 path_tem
    path_tem = os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/ast/ast.jsonl'
    for i in tem_train:
        with jsonlines.open(path_tem,
                            mode='a') as writer:
            writer.write(i)
    #将临时 JSONL 文件 path_tem 压缩成 gzip 格式，并保存为 "tem_数据集名称/ast/train.jsonl.gz
    f_in = open(path_tem, 'rb')
    # print(os.getcwd())
    f_out = gzip.open(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/ast/train.jsonl.gz', 'wb')
    f_out.writelines(f_in)
    f_out.close()
    f_in.close()
    os.remove(path_tem)
    # print("train ready")

    for i in tem_valid:
        with jsonlines.open(path_tem,
                            mode='a') as writer:
            writer.write(i)
    f_in = open(path_tem, 'rb')
    # print(os.getcwd())
    f_out = gzip.open(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/ast/valid.jsonl.gz', 'wb')
    f_out.writelines(f_in)
    f_out.close()
    f_in.close()
    os.remove(path_tem)
    # print("valid ready")

    for i in tem_test:
        with jsonlines.open(path_tem,
                            mode='a') as writer:
            writer.write(i)

    # zip
    f_in = open(path_tem, 'rb')
    # print(os.getcwd())
    f_out = gzip.open(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/ast/test.jsonl.gz', 'wb')
    f_out.writelines(f_in)
    f_out.close()
    f_in.close()
    os.remove(path_tem)
    # print("test ready")

    """
    -------------CDFG---------------
    """

    tem_cdfg = []
    mkdir(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/cdfg')

    with open(os.path.split(path)[0] + '/' + str(os.path.split(path)[1]) + '_cdfg.jsonl', "r+", encoding="utf8") as f:
        for item in jsonlines.Reader(f):
            tem_cdfg.append(item)
    # 1:1
    randomtem = np.arange(len(tem_cdfg))
    pos_tem = []
    neg_tem = []

    for step, i in enumerate(randomtem):
        ast = tem_cdfg[i]
        if ast['Property'] == 0:
            neg_tem.append(ast)
        else:
            pos_tem.append(ast)
    length = min(len(pos_tem), len(neg_tem))
    neg_tem = neg_tem[:length]
    pos_tem = pos_tem[:length]

    tem_train = neg_tem[:int(length * train)] + pos_tem[:int(length * train)]
    np.random.shuffle(tem_train)
    tem_valid = (neg_tem[int(length * train):int(length * (train + valid))]) + (
        pos_tem[int(length * train):int(length * (train + valid))])
    np.random.shuffle(tem_valid)
    tem_test = (neg_tem[int(length * (train + valid)):]) + (pos_tem[int(length * (train + valid)):])
    np.random.shuffle(tem_test)
    path_tem = os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/cdfg/cdfg.jsonl'
    for i in tem_train:
        with jsonlines.open(path_tem,
                            mode='a') as writer:
            writer.write(i)
    f_in = open(path_tem, 'rb')
    # print(os.getcwd())
    f_out = gzip.open(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/cdfg/train.jsonl.gz', 'wb')
    f_out.writelines(f_in)
    f_out.close()
    f_in.close()
    os.remove(path_tem)
    # print("train ready")

    for i in tem_valid:
        with jsonlines.open(path_tem,
                            mode='a') as writer:
            writer.write(i)
    f_in = open(path_tem, 'rb')
    # print(os.getcwd())
    f_out = gzip.open(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/cdfg/valid.jsonl.gz', 'wb')
    f_out.writelines(f_in)
    f_out.close()
    f_in.close()
    os.remove(path_tem)
    # print("valid ready")

    for i in tem_test:
        with jsonlines.open(path_tem,
                            mode='a') as writer:
            writer.write(i)

    # zip
    f_in = open(path_tem, 'rb')
    # print(os.getcwd())
    f_out = gzip.open(os.path.split(path)[0] + '/' + 'tem_' + os.path.split(path)[1] + '/cdfg/test.jsonl.gz', 'wb')
    f_out.writelines(f_in)
    f_out.close()
    f_in.close()
    os.remove(path_tem)

    print("data ready")

def Preprocess(path):#参数是数据集路径
    # os.path.split() return path and file's name. remember to use '/' rather than '\'
    cwetype = os.path.split(path)[1]#使用 os.path.split() 函数从提供的 path 中提取文件名
    # check if vocabulary exists
    #创建词向量并保存为 "word2vec_" + str(cwetype) + ".pkl" 的形式
    w2v(path, cwetype)

    # 分割路径并将文件名部分与所需的扩展名连接起来，以创建 astJsonl。
    astJsonl = os.path.split(path)[0] + '/' + str(os.path.split(path)[1]) + '_ast.jsonl'
    cdfgJsonl = os.path.split(path)[0] + '/' + str(os.path.split(path)[1]) + '_cdfg.jsonl'
    # auxiliaryInputJsonl = os.path.split(path)[0] + '/' + str(os.path.split(path)[1]) + '_auxiliaryInput.jsonl'

    #将AST和CDFG数据集进行分类并保存
    if os.path.exists(astJsonl) and os.path.exists(cdfgJsonl) :
        Split(0.8, 0.1, 0.1, path)#数据划分和保存
    else:
        GetInfor(path)#分图并转变为向量####
        Split(0.8, 0.1, 0.1, path)

def Preprocess_predict(path):
    # os.path.split() return path and file's name. remember to use '/' rather than '\'
    cwetype = os.path.split(path)[1]
    # check if vocabulary exists
    w2v(path, cwetype)

    # split
    astJsonl = os.path.split(path)[0] + '/' + str(os.path.split(path)[1]) + '_ast.jsonl'
    cdfgJsonl = os.path.split(path)[0] + '/' + str(os.path.split(path)[1]) + '_cdfg.jsonl'
    print(f"this is astJson: {astJsonl} ")
    # auxiliaryInputJsonl = os.path.split(path)[0] + '/' + str(os.path.split(path)[1]) + '_auxiliaryInput.jsonl'

    if os.path.exists(astJsonl) and os.path.exists(cdfgJsonl) :
        Split_predict(path)
        print(11111)
    else:
        print(22222)
        GetInfor(path)
        Split_predict(path)