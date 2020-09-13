package project1;
import java.util.*;
public class project1_2 {
    public static void main(String[] args)
    {
        String str2, str3;//str:输入的字符串；str2、str3为截取片段；str1：需要删掉的字符（转换）
        char del;
        //输入
        Scanner reader = new Scanner(System.in);
        System.out.print("输入字符串：");
        String str = reader.nextLine();
        System.out.print("输入需要删除的字符：");
        String str1 = reader.nextLine();
        del = str1.charAt(0);

        //遇到就截取字符串分成左右str1、str2，在拼接
        for(int i = 0; ; i++)
        {
            if(del == str.charAt(i))
            {
                str2 = str.substring(0 , i);
                str3 = str.substring(i + 1);
                str = str2 + str3;
                i--;
            }
            if(i == str.length() - 1)
            {
                break;
            }
        }

        //输出
        System.out.println("输出为：" + str);
    }
}
