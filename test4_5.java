package edu4;

public class test4_5 {
    public static void main(String[] args)
    {
        String str1 = "Hello";
        String str2 = "World!";
        String str = str1 + str2;
        System.out.println("str = " + str);//HelloWorld!
        System.out.println("str长度：" + str.length());//11
        System.out.println("str的第8个位置的字符；" + str.charAt(7));//r
        System.out.println("str中字符串or第一次出现的位置：" + str.indexOf("or"));//6
        System.out.println("将str小写：" + str.toLowerCase());//helloworld!
        System.out.println("将str大写：" + str.toUpperCase());//HELLOWORLD!
    }
}
