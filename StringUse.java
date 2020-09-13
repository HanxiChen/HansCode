package FinalTest;

public class StringUse {
    public static void main(String[] args){
        String str1 = "Hello";
        String str2 = "World";
        String str = str1 + str2;
        System.out.println("str = " + str);
        System.out.println("str的长度：" + str.length());
        System.out.println("str的第8个位置的字符：" + str.charAt(7));
        System.out.println("str中字符串or第一次出现的位置：" + str.indexOf("or"));
        System.out.println("str转变为小写：" + str.toLowerCase());
        System.out.println("str转变为大写：" + str.toUpperCase());
    }
}
