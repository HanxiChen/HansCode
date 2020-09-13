package FinalTest;
class Ca
{
    int a;
    static int b;

    public static void m1()
    {
        new Ca().a = 10;
        b = 10;
    }
    public void m2()
    {
        a = 5;
        b = 5;
    }
    public static void m3()
    {
        m1();
        new Ca().m2();
    }
}
public class StaticNum {
    public static void main(String[] args){
        Ca c1 = new Ca();
        Ca c2 = new Ca();
        Ca.b = 5;
        c1.b = 6;
        c2.b = 7;
        System.out.println(Ca.b);
        System.out.println(c1.b);
        System.out.println(c2.b);
    }
}
