package FinalTest;

import static java.lang.Math.sqrt;

abstract class Shape
{
    abstract float getArea();
    abstract float getPerimeter();
}
class Circle extends Shape
{
    final float PI = 3.14F;
    int radius;
    public Circle(int newRadius)
    {
        radius = newRadius;
    }
    public float getArea()
    {
        return PI * radius * radius;
    }
    public float getPerimeter()
    {
        return 2 * PI * radius;
    }
}
class Rectangle extends Shape{
    int a;
    int b;
    int c;
    public Rectangle(int newWidth1, int newWidth2, int newWidth3)
    {
        a = newWidth1;
        b = newWidth2;
        c = newWidth3;
    }
    public float getArea()
    {
        return (float)sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a)) / 4;
    }
    public float getPerimeter()
    {
        return a + b + c;
    }
}
class Square extends Shape
{
    int width, length;
    public Square(int getWidth, int getLength)
    {
        width = getWidth;
        length = getLength;
    }
    public float getArea()
    {
        return width * length;
    }
    public float getPerimeter()
    {
        return 2 * (width + length);
    }
}
public class T1Shape{
    public static void main(String[] args)
    {
        Circle c1 = new Circle(2);
        System.out.println(c1.getArea());
        System.out.println(c1.getPerimeter());

        Rectangle r1 = new Rectangle(2,2,2);
        System.out.println(r1.getArea());
        System.out.println(r1.getPerimeter());

        Square s1 = new Square(2,3);
        System.out.println(s1.getArea());
        System.out.println(s1.getPerimeter());
    }

}
