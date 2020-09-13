package edu2;

public class test22 {
    public static void main(String[] args) {
        int a = 10;
        int b = 6;
        int s = 0;

        s = a % b; //s = 4
        System.out.println("a % b = " + s);

        a--; //a = 9
        b--; //b = 5
        s = ++a + --b;//a = 10, b = 4, s = 14
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("s = " + s);

        s = a++ + b--;//a = 11, b = 3, s = 14
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("s = " + s);
    }
}
