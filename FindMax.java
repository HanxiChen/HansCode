package FinalTest;
import java.util.*;
public class FindMax {
    public static void main(String[] args){
        Scanner reader = new Scanner(System.in);
        int input = 0;
        System.out.print("请输入第一个数字：");
        input = reader.nextInt();
        int max = input;
        int i = 2;
        while(input != -1){
            System.out.print("请输入第" + i + "个数字：");
            input = reader.nextInt();
            if(max < input){
                max = input;
            }
            i++;
        }
        System.out.println("最大数：" + max);
    }
}
