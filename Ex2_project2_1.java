package Ex2;
import java.util.Scanner;
class Electricity_Fees{
    private String season;
    private double per = 0.49;
    private double count = 125;

    public Electricity_Fees(String season){
        if(season.equals("夏季")){
            this.season = season;
        }
        else if(season.equals("冬季")){
            this.season = season;
            count += 20;
        }
        else{
            System.out.println("季节有误！");
        }
    }
    public void getMoney(){
        System.out.println(season + "的电费是：" + per * count);
    }
}
public class project2_1 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("请输入需要计算费用的季节：");
        String season = input.next();
        Electricity_Fees fees = new Electricity_Fees(season);
        fees.getMoney();
    }
}
