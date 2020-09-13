package edu5;
import java.util.*;

import static java.lang.Math.sqrt;

class Shape
{
    //成员变量
    String Shape1;
    double length;//长
    double width;//宽
    double radius;//半径
    //成员方法
    //输出图形类型
    void setShape(String shape1)
    {
        Shape1 = shape1;
        System.out.println("输入的是" + Shape1);
    }
    //计算圆的面积
    double circle(double r)
    {
        radius = r;
        return 3.14 * r * r;
    }
    //计算矩形面积
    double orthogon(double len, double wid)
    {
        length = len;  width = wid;
        return length * width;
    }
    //计算三角形面积
    double Striangle(double d1, double d2, double d3)
    {
        return sqrt((d1+d2+d3)*(d1+d2-d3)*(d1+d3-d2)*(d2+d3-d1)) / 4;
    }
}
public class hw5_2Shape {
    public static void main(String[] args)
    {
        String shape1;
        double len, wid, hei, r;//len长、wid宽、hei高、r半径
        double d1, d2, d3;//三角形三边
        double area = 0;
        Scanner reader = new Scanner(System.in);
        Shape s1 = new Shape();
        shape1 = reader.nextLine();
        s1.setShape(shape1);


        //判断图形类型
        //矩形
        if(shape1.equals("矩形"))
        {
            System.out.print("请输入长和宽：");
            len = reader.nextDouble();
            wid = reader.nextDouble();
            area = s1.orthogon(len, wid);
            System.out.println(shape1 + "的面积为" + area);
        }
        //圆
        if(shape1.equals("圆形"))
        {
            System.out.print("请输入半径：");
            r = reader.nextDouble();
            area = (double)(s1.circle(r));
            System.out.println(shape1 + "的面积为" + area);
        }
        //三角形
        if(shape1.equals("三角形"))
        {
            System.out.print("请输入三边长：");
            d1 = reader.nextDouble();
            d2 = reader.nextDouble();
            d3 = reader.nextDouble();
            //判断是否是三角形
            double temp = 0;//进行三个数排序
            if(d1 < d2) { temp = d1; d1 = d2; d2 = temp;}
            if(d1 < d3) { temp = d1; d1 = d3; d3 = temp;}
            if(d2 < d3) { temp = d2; d2 = d3; d3 = temp;}

            if(d1 < d2 + d3)
            {
                area = s1.Striangle(d1, d2, d3);
                System.out.println(shape1 + "的面积为" + area);
            }
            else
            {
                System.out.println("输入的数据有误");
            }
        }
    }
}
