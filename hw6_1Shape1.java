package edu6;
import java.util.*;
import static java.lang.Math.sqrt;

class Shape1
{
    //成员变量
    private String name;//图形名字
    private double length;//长
    private double width;//宽
    private double radius;//半径
    private double d1, d2, d3;//三角形三边
    private double C;//周长
    private double S;//面积

    //构造方法及重载
    public Shape1(String n, double r)//圆
    {
        this.name = n;
        radius = r;
    }
    public Shape1(String n, double len, double wid)//矩形
    {
        this.name = n;
        length = len;
        width = wid;
    }
    public Shape1(String n, double d1, double d2, double d3)//三角形
    {
        this.name = n;
        this.d1 = d1;
        this.d2 = d2;
        this.d3 = d3;
    }

    //判断图形类型
    public void getShape()
    {
        if(name.equals("圆形"))
        {
            System.out.println("圆形");
        }
        if(name.equals("矩形"))
        {
            System.out.println("矩形");
        }
        if(name.equals("三角形"))
        {
            System.out.println("三角形");
        }
    }
    //判断三角形存在性
    public boolean Triangle()
    {
        double temp = 0;//进行三个数排序
        if(d1 < d2) { temp = d1; d1 = d2; d2 = temp;}
        if(d1 < d3) { temp = d1; d1 = d3; d3 = temp;}
        if(d2 < d3) { temp = d2; d2 = d3; d3 = temp;}
        if(d1 < d2 + d3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    double perimeter()//周长
    {
        if(name.equals("圆形"))
        {
            C = 4 * 3.14 * radius;
        }
        if(name.equals("矩形"))
        {
            C = 2 * (length + width);
        }
        if(name.equals("三角形"))
        {
            C = d1 + d2 + d3;
        }
        return C;
    }

    double area()//面积
    {
        if(name.equals("圆形"))
        {
            S = 3.14 * radius * radius;
        }
        if(name.equals("矩形"))
        {
            S = length * width;
        }
        if(name.equals("三角形"))
        {
            S = sqrt((d1+d2+d3)*(d1+d2-d3)*(d1+d3-d2)*(d2+d3-d1)) / 4;
        }
        return S;
    }
}
public class hw6_1Shape1 {
    public static void main(String[] args)
    {
        String name;
        double len, wid, r;//长、宽、半径
        double d1,d2,d3;//三角形三边
        double area = 0;//面积
        Scanner reader = new Scanner(System.in);
        System.out.print("请输入图形：");
        name = reader.nextLine();

        //矩形
        if(name.equals("圆形"))
        {
            System.out.print("请输入半径：");//n有多少个输入多少个
            r = reader.nextInt();
            Shape1 s1 = new Shape1(name, r);
            System.out.println();
            s1.getShape();
            System.out.println("周长" + s1.perimeter() + "," + "面积" + s1.area());
        }
        if(name.equals("矩形"))
        {
            System.out.print("请输入长和宽：");
            len = reader.nextInt();
            wid = reader.nextInt();
            Shape1 s1 = new Shape1(name, len, wid);
            s1.getShape();
            System.out.println("周长" + s1.perimeter() + "," + "面积" + s1.area());
        }
        if(name.equals("三角形"))
        {
            System.out.print("请输入三边：");
            d1 = reader.nextInt();
            d2 = reader.nextInt();
            d3 = reader.nextInt();
            Shape1 s1 = new Shape1(name, d1, d2, d3);
            s1.getShape();
            if(s1.Triangle())
            {
                System.out.println("周长" + s1.perimeter() + "," + "面积" + s1.area());
            }
            else
            {
                System.out.println("输入的数据有误");
            }
        }
    }
}
