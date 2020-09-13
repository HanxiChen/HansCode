package FinalTest;
abstract class Shape54
{
    public abstract float area();
    public abstract void printArea();
}
class Rectangle54 extends Shape54
{
    int width;
    int length;
    public Rectangle54(int newWidth, int newLength)
    {
        width = newWidth;
        length = newLength;
    }
    public float area()
    {
        return width * length;
    }
    public void printArea()
    {
        System.out.println(area());
    }
}
class Circle54 extends Shape54
{
    final float PI = 3.14F;
    int radius;
    public Circle54(int newRadius)
    {
        radius = newRadius;
    }
    public float area()
    {
        return PI * radius * radius;
    }
    public void printArea()
    {
        System.out.println(area());
    }
}
public class Five_4abstract {
    public static void main(String[] args){
        Rectangle54 r1 = new Rectangle54(3,4);
        Circle54 c1 = new Circle54(2);
        r1.printArea();
        c1.printArea();
    }
}
