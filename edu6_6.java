package edu6;

public class edu6_6 {

    String strName;

    public void setName(String name)
    {
        strName = name;
    }
    public String getName()
    {
        return strName;
    }
    public static void main(String[] args)
    {
        edu6_6 a = new edu6_6();
        a.setName("张三");
        edu6_6 b = new edu6_6();
        b.setName("李四");
        edu6_6 c = new edu6_6();
        c.setName("王五");
        System.out.println("a的名字是 " + a.getName());
        System.out.println("b的名字是 " + b.getName());
        System.out.println("c的名字是 " + c.getName());
        if(a == b)
        {
            System.out.println("a与b相等");
        }
        else
        {
            System.out.println("a与b不相等");
        }
    }
}
