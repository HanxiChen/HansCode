package edu3;
import java.util.*;
public class hw_guessnum {
    public static void main(String[] args)
    {
        int magic, guess, count = 0;
        Random rand = new Random();
        Scanner reader = new Scanner(System.in);
        magic = rand.nextInt(100);
        do
        {
            System.out.print("请输入猜数：");
            guess = reader.nextInt();
            if(guess == magic)
            {
                System.out.println("Right!");
            }
            else if(guess > magic)
            {
                System.out.println("Too high!");
            }
            else
            {
                System.out.println("Too low!");
            }
            count++;
        }while(guess != magic);
        System.out.println("一共猜了" + count + "次");
    }
}
