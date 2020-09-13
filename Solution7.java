package Leetcode;

public class Solution7 {
    public static int reverse(int x){
        int num = x % 10;
        while(x >= 10 || x <= -10)
        {
            if((num * 10) / 10 != num)
            {
                num = 0;
                break;
            }
            x = x / 10;
            num = num * 10 + (x % 10);
        }
        return num;
    }
    public static void main(String[] args)
    {
        System.out.println(reverse(1534236469));
    }
}
