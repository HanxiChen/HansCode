package edu3;

public class hw_flower {
    public static void main(String[] args)
    {
        int ge = 0, shi = 0, bai = 0;
        for (int num = 100; num < 1000; num++)
        {
            ge = num % 10;
            shi = num / 10 % 10;
            bai = num / 100;
            if (num == ge * ge * ge + shi * shi * shi + bai * bai * bai)
            {
                System.out.print(num + " ");//此时该数是水仙花数
            }
        }
        System.out.print("\b");//输出格式控制
    }
}
