package edu4;
import java.util.Arrays;//第一种方法 用Math.Random(b - a + 1) + 1
import java.util.Random;//第二种方法 用Random类导包
public class test4_3 {
    public static void main(String[] args)
    {
        int i, j;
        int[][] a ;
        a = new int[2][3];

        //产生随机数，有两种方法
        //Random rand = new Random();第二种
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 3; j++)
            {
                a[i][j] = (int)(Math.random() * 100) + 1; //给每个元素赋1~100的值
                //a[i][j] = random.nextInt(100) + 1; //第二种方法
                System.out.print("a[" + i + "]" + "[" + j + "] = " + a[i][j] + " ");
            }
            System.out.println();
        }

        //给每行元素排列
        Arrays.sort(a[0]);
        Arrays.sort(a[1]);

        //输出
        for(i = 0; i < 2; i++)
        {
            if(i == 0) System.out.print("排序后，第一行元素从小到大是：");
            if(i == 1) System.out.print("排序后，第二行元素从小到大是：");
            for(j = 0; j < 3; j++)
            {
                System.out.print("a[" + i + "]" + "[" + j + "] = " + a[i][j] + " ");
            }
            System.out.println();
        }
    }
}
