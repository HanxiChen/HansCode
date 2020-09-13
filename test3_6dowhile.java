package edu3;

public class test3_6dowhile {
    public static void main(String[] args)
    {
        int i = 100, s = 0;
        do
        {
            s = s + i;
            i--;
        }
        while(i > 0);
        System.out.println("100 + 99 + 98 + ... + 1 = " + s);
    }
}
