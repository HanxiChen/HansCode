package FinalTest;
import java.util.*;
public class T6Array {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n;
        int m;
        int sum = 0;
        double average = 0;
        System.out.print("请输入一个正整数n（0 < n <= 9）：");
        n = input.nextInt();
        Integer[] array = new Integer[n+1];

        while(n > 0 && n <= 9)
        {
            System.out.println("输入的数据有误，请重新输入：");
            n = input.nextInt();
        }

        System.out.print("请输入数组：");
        for(int i = 0; i < n; i++)
        {
            array[i] = input.nextInt();
            sum += array[i];
        }
        array[n] = 0;
        Arrays.sort(array, Collections.reverseOrder());

        System.out.print("请输入需要插入的整数m：");
        m = input.nextInt();
        sum += m;

        for(int i = 0; i < n+1; i++)
        {
            if(array[i] < m)
            {
                for(int j = n; j >= i; j--){
                    array[j] = array[j-1];
                }
                array[i] = m;
                break;
            }
        }

        for(int i = 0; i < n+1; i++)
        {
            System.out.print(array[i] + " ");
        }
        System.out.println("平均数：" + (float)sum / (n+1));
    }
}
