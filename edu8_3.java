package edu8;
import java.text.DecimalFormat;
interface Shape
{
    float PI = 3.14F;
    double area();
    double volume();
}
class Cylinder implements Shape
{
    private double radius;
    private int height;
    public Cylinder(double r, int h)
    {
        radius = r;
        height = h;
    }
    public double area()
    {
        return PI * radius * radius;
    }
    public double volume()
    {
        return area() * height;
    }
}

public class edu8_3 {
    public static void main(String[] args){
        Cylinder a = new Cylinder(2,3);
        DecimalFormat myFormat = new DecimalFormat("0.00");
        System.out.println("圆柱体底面积是" + myFormat.format(a.area()));
        System.out.println("圆柱体体积是" + myFormat.format(a.volume()));
    }
}
