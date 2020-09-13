package FinalTest;
import java.util.*;
public class Input {
    public static void main(String[] args){
        int a = 0;
        String s = "";
        Scanner reader = new Scanner(System.in);

        System.out.print("从键盘输入一串字符：");
        s = reader.nextLine();
        System.out.println("你输入的字符串是" + s);

        System.out.print("从键盘输入一串字符：");
        s = reader.nextLine();
        System.out.println("你输入的字符串是" + s);

        System.out.print("从键盘输入一个整数：");
        a = reader.nextInt();
        System.out.println("你输入的整数是" + a);


    }
}
