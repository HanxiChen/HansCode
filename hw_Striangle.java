package edu2;
import java.util.*;

import static java.lang.Math.sqrt;

public class hw_Striangle {
    public static void main(String[] args)
    {
        int a = 0, b = 0, c = 0;
        double s = 0D;
        Scanner reader = new Scanner(System.in);
        System.out.print("从键盘输入三个整数：");
        a = reader.nextInt();
        b = reader.nextInt();
        c = reader.nextInt();
        s = sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a)) / 4;
        System.out.println("三角形面积：" + s);
    }
}
