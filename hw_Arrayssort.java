package edu4;
import java.util.*;//使用Arrays类和Scanner类
public class hw_Arrayssort {
    public static void main(String[] args)
    {
        int i, x, flag = 0, n;
        Scanner reader = new Scanner(System.in);

        System.out.print("请输入一个正整数n：");
        n = reader.nextInt();
        int[] a = new int[n + 1];

        //对输入的数据判断
        if(n <= 0 || n >= 9)
        {
            System.out.print("输入的数据有误，请重新输入一个正整数n：");
            n = reader.nextInt();
        }

        //数组输入
        System.out.print("请输入一个长度为"+ n +"的一维数组：");
        for(i = 0; i < n; i++)
        {
            a[i] = reader.nextInt();
        }

        //排序1：Arrays类的sort()方法
        Arrays.sort(a);
        Arrays.sort(a, 0, (n + 1));//从a[n]到a[n]由小到大排序（可用于部分排序）

        //排序2：冒泡排序


        //插入数字x
        System.out.print("请输入需要插入的数字x：");
        x = reader.nextInt();
        for(i = 0; i < n; i++)
        {
            if(x >= a[i])
            {
                flag = i;
            }
        }//找到需要插入的位置flag
        for(i = 0; i < flag; i++)
        {
            a[i] = a[i + 1];
        }
        a[flag] = x;

        //输出检查
        for(i = 0; i < n + 1; i++)
        {
            System.out.print(a[i] + " ");
        }
    }
}
