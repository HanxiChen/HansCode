package edu3;
import java.io.*;
public class test3_5whileread {
    public static void main(String[] args) throws IOException
    {
        int count = 0, b;
        System.out.print("请输入数据：");
        while( (char)(b = System.in.read()) != '\n')
        {
            System.out.print((char)b);
            count++;
        }
        System.out.print("\n你输入了" + count + "个字符");
    }
}
