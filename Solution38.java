package Leetcode;

public class Solution38 {
    public static String countAndSay(int n)
    {
        String s = "";
        int n1 = 0, n2 = 1;
        if(n == 1)
        {
            return "1";
        }
        String str = countAndSay(n - 1);
        for(n2 = 1; n2 < str.length(); n2++)
        {
            if(str.charAt(n1) != str.charAt(n2))
            {
                int count = n2 - n1;
                s = s + count + "" + str.charAt(n1);
            }
        }
        return s;
    }
    public static void main(String[] args)
    {
        countAndSay(2);
    }
}
