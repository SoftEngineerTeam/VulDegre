package slice;
// 对代码进行函数级切片
public class Main{
    public static void main(String[] args) {

        String sourceFilePath = "E:\\datasets\\FUNDEND\\datasets_good&bad\\good";
        String storeFilePath = "E:\\datasets\\FUNDEND\\datasets_good&bad_slice";

        slice.AST_extract ast_extract = new slice.AST_extract();

        int batchsize = 10;
        int batchnum_lastrun = 0;

        //sard_good_bad
        ast_extract.AST_SardGoodBad(sourceFilePath, storeFilePath,batchnum_lastrun,batchsize);
    }
}
