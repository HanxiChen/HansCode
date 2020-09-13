package edu3;
import java.util.*;
public class hw_test3_4 {
    public static void main(String[] args)
    {
        int year, month, days, flag = 0;
        Scanner reader = new Scanner(System.in);
        while(true)
        {
           flag = 0;//初始化

           //输入年和月
           System.out.print("请输入年份和月份：");
           year = reader.nextInt();
           if(year == 0)
           {
               System.out.print("程序结束");
               break;
           }
           month = reader.nextInt();

           //对输入的数据判断
           if((month > 12 || month < 0) && (year < 0))
           {
               System.out.println("输入的数据有误");
               continue;
           }

           //闰年判断
           if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
           {
               flag = 1;
           }

           //判断月份的天数
           switch (month)
           {
               case 2:
                   if(flag == 1) days = 29;
                   else days = 28; break;
               case 4:
               case 6:
               case 9:
               case 11: days = 30; break;
               default: days = 31;
           }

           //输出
           System.out.println(month + "月份为" + days + "天");
        }
    }
}
