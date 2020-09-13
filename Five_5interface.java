package FinalTest;
import java.text.DecimalFormat;
interface Shape6
{
    final float PI = 3.14F;
    double area();
    double volume();
}
class Cylinder55 implements Shape6
{
    private double radius;
    private int height;
    public Cylinder55(double r, int h)
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
public class Five_5interface {
    public static void main(String[] args)
    {
        Cylinder55 a = new Cylinder55(2,3);
        DecimalFormat myFormat = new DecimalFormat("0.00");
        System.out.println("圆柱体底面积是" + myFormat.format(a.area()));
        System.out.println("圆柱体的体积是" + myFormat.format(a.volume()));
    }
}
