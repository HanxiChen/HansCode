package edu2;

public class test24 {
    public static void main(String[] args) {
        boolean a, x, y, z;
        a = 5 > 6;//a = false
        x = !a;//x = true
        y = a && x;//y = false
        z = x || y;//z = true
        System.out.println("a = " + a);
        System.out.println("x = " + x);
        System.out.println("y = " + y);
        System.out.println("z = " + z);
    }
}
