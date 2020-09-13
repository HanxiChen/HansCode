package Leetcode;

public class Solution58 {
    public static int lengthOfLastWord(String s)
    {
        int length = 0; int flag = 0;
        if(s.length() == 0)
        {
            return 0;
        }
        for(int i = s.length() - 1; i >= 0; i--)
        {
            if(s.charAt(i) == ' ' && flag == 0)
            {
                continue;
            }
            else if(s.charAt(i) == ' ')
            {
                break;
            }
            else
            {
                flag = 1;
                length++;
            }
        }
        return length;
    }
    public static void main(String[] args)
    {
        System.out.println(lengthOfLastWord("Hello World"));
        lengthOfLastWord("b a  ");
    }
}
