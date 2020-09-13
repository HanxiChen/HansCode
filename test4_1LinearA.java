package edu4;

public class test4_1LinearA {
    public static void main(String[] args)
    {
        int i;
        //声明数组
        int[] a;
        a = new int[10];
        //顺序
        for(i = 0; i <= a.length - 1; i++)
        {
            System.out.print("a[" + i + "] = " + a[i] + " ");
        }
        System.out.print("\n");
        //逆序给数组a赋值，并且输出元素的内容
        for(i = a.length - 1; i >= 0; i--)
        {
            a[i] = i;
            System.out.print("a[" + i + "] = " + a[i] + " ");
        }
    }
}
