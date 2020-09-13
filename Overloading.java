package FinalTest;
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
        s = a + b + c;
        return s;
    }
    public int plus(int a, int b, int c, int d)
    {
        int s;
        s = a + b + c + d;
        return s;
    }
}
public class Overloading {
    public static void main(String[] args){
        MyPlus m1 = new MyPlus();
        System.out.println(m1.plus(1,2));
        System.out.println(m1.plus(1,2,3));
        System.out.println(m1.plus(1,2,3,4));
    }
}
