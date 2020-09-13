package Leetcode;

public class Solution9 {
    public static boolean isPalindrome(int x){
        String res = "";
        if(x < 0){
            return false;
        }
        else{
            String num = "" + x;//转换成字符串
            for(int i = num.length() - 1; i >= 0; i--){
                res = res + "" + num.charAt(i);
            }
            if(num.equals(res)){
                return true;
            }
            else{
                return false;
            }
        }
    }
    public static void main(String[] args) {
        System.out.println(isPalindrome(121));
        System.out.println(isPalindrome(-121));
        System.out.println(isPalindrome(10));
    }
}
