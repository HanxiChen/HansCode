package edu6;
class MyPlus
{
    public int plus(int a, int b)
    {
        int s;
        s = a + b;
        return s;
    }
    public int plus(int a, int b, int c)
    {
        int s;
        s = plus(a, b) + c;
        return s;
    }
    public int plus(int a, int b, int c, int d)
    {
        int s;
        s = plus(a, b, c) + d;
        return s;
    }
    public static void main(String[] args)
    {
        MyPlus p = new MyPlus();
        System.out.println("1 + 2 = " + p.plus(1, 2));
        System.out.println("1 + 2 + 3 = " + p.plus(1, 2,3));
        System.out.println("1 + 2 + 3 + 4 = " + p.plus(1, 2,3,4));
    }
}
public class edu6_4 {
}
