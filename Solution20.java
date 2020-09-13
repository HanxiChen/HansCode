package Leetcode;

public class Solution20 {
    public static int judge(String s, char ch, int len, int i){
        int j = len - 1;
        for( ; j > i ; j--){
            char c2 = s.charAt(j);
            if(c2 == ch){
                if(j - i == 1){
                    break;
                }
                else{
                    if(j - i != 1){
                        String s2 = s.substring(i+1,j);
                        isValid(s2);
                        if(isValid(s2) == false)
                        {
                            break;
                        }
                    }
                }
                String s3 = s.substring(j+1);
                if(s3.equals("")){
                    break;
                }
                else{
                    isValid(s3);
                }
            }
        }
        return j;
    }
    public static boolean isValid(String s){
        int len = s.length();
        if(len % 2 != 0){
            return false;
        }
        else{
            for(int i = 0; i < len; i++){
                char s1 = s.charAt(i);
                switch(s1){
                    case '(': i = judge(s, ')', len, i); break;
                    case '[': i =judge(s, ']', len, i); break;
                    case '{': i =judge(s, '}', len, i);break;
                    default: return false;
                }

            }
            return true;
        }
    }
    public static void main(String[] args){
        System.out.println(isValid("()"));
        System.out.println(isValid("()[]{}"));
        System.out.println(isValid("(]"));
        System.out.println(isValid("([)]"));
        System.out.println(isValid("{[]}"));
    }
}
