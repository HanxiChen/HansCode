package Leetcode;

public class Solution13 {
    public static int romanToInt(String s){
        int num = 0;
        int n1 = 0, n2 = 0;
        n1 = getnum(s.substring(0 , 1));
        for(int i = 1; i < s.length(); i++) {
            n2 = getnum(s.substring(i , i + 1));
            if(n1>=n2){
                num = num + n1;
            }
            else{
                num = num - n1;
            }
            n1 = n2;
        }
        num = num + n1;
        return num;
    }
    public static int getnum(String num){
        int r = 0;
        switch(num){
            case "I": r = 1; break;
            case "V": r = 5; break;
            case "X": r = 10; break;
            case "L": r = 50; break;
            case "C": r = 100; break;
            case "D": r = 500; break;
            case "M": r = 1000; break;
        }
        return r;
    }
    public static void main(String[] args){
        System.out.println(romanToInt("III"));
        System.out.println(romanToInt("IV"));
        System.out.println(romanToInt("IX"));
        System.out.println(romanToInt("LVIII"));
        System.out.println(romanToInt("MCMXCIV"));
    }
}
