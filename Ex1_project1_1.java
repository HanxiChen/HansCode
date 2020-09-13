package project1;
import java.util.*;
public class project1_1 {
    public static void main(String[] args)
    {
        int res = 0, num, i;
        String str1;

        //输入
        Scanner reader = new Scanner(System.in);
        str1 = reader.nextLine();
        int len = str1.length();

        //将每个字符分别显示并存进数组中，再转换
        int[] a = new int[len];
        for(i = 0; i < len; i++)
        {
            num = (int)str1.charAt(i) - '0';
            a[i]= num;
            res += num;
        }

        //输出
        for(i = 0; i < len; i++)
        {
            if(i == len - 1)
            {
                System.out.print(a[i] + "=");
            }
            else
            {
                System.out.print(a[i] + "+");
            }
        }
        System.out.println(res);
    }
}
