package edu2;

public class test25 {
    public static void main(String[] args) {
        byte a = 0;
        short b = 0;
        int c = 0;
        long d = 0;
        float e = 0F;
        double f = 0D;
        String s = "10";

        //字符串转换成数值型
        a = Byte.parseByte(s);
        b = Short.parseShort(s);
        c = Integer.parseInt(s);
        d = Long.parseLong(s);
        e = Float.parseFloat(s);
        f = Double.parseDouble(s);
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("c = " + c);
        System.out.println("d = " + d);
        System.out.println("e = " + e);
        System.out.println("f = " + f);

        //数值型转换成字符串
        int  MyInt = 1234;
        String MyString = "" + MyInt;
        System.out.println("MyString = " + MyString);
    }
}
