package edu3;

public class test3_3for {
    public static void main(String[] args)
    {
        int s = 0;
        for(int i = 1; i <= 99; i++)
        {
            s = s + i;
            i++;
        }
        System.out.println("1 + 3 + ... + 99 = " + s);
    }
}
