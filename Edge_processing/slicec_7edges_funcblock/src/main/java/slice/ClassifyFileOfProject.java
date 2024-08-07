package slice;

import java.io.*;
import java.util.UUID;

/**
 * Categorize the files in a project, such as all C language files, are placed in a new folder under the project
 * 遍历所有文件，提取C语言文件放到对应文件夹中
 * @author xiaoH  2019/11/4  20:40
 */
public class ClassifyFileOfProject {

    private static void del(String sourcePath, String storePath) throws Exception {
        File file = new File(sourcePath);
        File[] fs = file.listFiles();
        for (File f : fs) {
            if (f.isDirectory()) {
                del(f.getAbsolutePath(), storePath);
            }

            if (f.isFile() && f.toString().endsWith(".c")) {
                String store = storePath + "\\" + UUID.randomUUID() + ".c";

                if (!new File(storePath).exists()) {
                    new File(storePath).mkdirs();
                }
                if (!new File(store).exists()) {
                    new File(store).createNewFile();
                }

                FileReader fr = new FileReader(f);
                BufferedReader br = new BufferedReader(fr);

                FileWriter fw = new FileWriter(new File(store));
                BufferedWriter bw = new BufferedWriter(fw);

                String in;
                while ((in = br.readLine()) != null) {
                    bw.write(in + "\n");
                    bw.flush();
                }
            }
        }
    }

    public static void main(String[] args) {
        //.c
        String sourcePath = "E:\\datasets\\funded_build\\datasets\\bad";
        String storePath = "E:\\datasets\\FUNDEND\\datasets_slice\\bad";
        try {
            ClassifyFileOfProject.del(sourcePath, storePath);
        } catch (Exception e) {
            e.printStackTrace();
        }

    }
}
