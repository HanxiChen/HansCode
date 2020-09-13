package Homework;
import java.util.*;
public class Express_Fee {
    public static void main(String[] args)
    {
        int sum = 5;//快递费,初始值5
        double road;// road路程
        int weight;//weight重量
        Scanner reader = new Scanner(System.in);
        System.out.print("本快递公司低于1kg和低于50km一律5元\n请输入路程（路程不超过300km）：");
        road = reader.nextDouble();
        System.out.print("请输入重量（重量不能不超过6kg）：");
        weight = (int)reader.nextDouble();

        //数据判断
        if(road > 300 || road < 0 || weight < 0 || weight > 6)
        {
            System.out.println("输入的数据有误！");
        }
        //数据处理
        road = (road / 10) * 10;

        //重量大于1kg且路程大于50km
        if(road >= 50 && weight >= 1)
        {
            sum += (weight - 1) * 2;//计算行（重量）
            sum += (road / 50 - 1) * weight;//计算列（路程）
        }
        //输出
        if(road < 300 && road > 0 && weight > 0 && weight < 6)
        {
            System.out.println("快递费：" + sum);
        }

    }
}
