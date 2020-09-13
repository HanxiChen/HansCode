package edu3;
import java.util.*;
public class hw_prime {
    public static void main(String[] args)
    {
        int num, i = 0;
        Scanner reader = new Scanner (System.in);
        System.out.print("请输入一个数：");
        num = reader.nextInt();
        for(i = 2; i < num; i++)
        {
            if (num % i == 0)//从2开始判断有没有其他因子
            {
                break;
            }
        }
        if(i == num)
        {
           System.out.println("素数");
        }
        else
        {
           System.out.println("不是素数");
        }

    }
}
