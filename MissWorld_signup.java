package Homework;
import java.util.*;
class Miss
{
    //成员变量
    private int age;//年龄
    private boolean marriage;//婚育
    private boolean country;//国家
    private boolean education;//学历

    //构造方法
    public Miss(int age, boolean marriage, boolean country, boolean education)
    {
        this.age = age;
        this.marriage = marriage;
        this.country = country;
        this.education = education;
    }

    //判断
    int judge()
    {
        int r = 0;
        if((age >= 16 && age <= 25) && marriage == true && country == true && education == true)
        {
            r = 1;
        }
        return r;
    }
}
public class MissWorld_signup {
    public static void main(String[] args)
    {
        int age;//年龄
        boolean marriage;//婚育
        boolean country;//国家
        boolean education;//学历
        int Judge;
        Scanner reader = new Scanner(System.in);
        System.out.print("请输入年龄：" );
        age = reader.nextInt();
        System.out.print("是否未婚未育（未婚未育true，其他false）:");
        marriage = reader.nextBoolean();
        System.out.print("是否为中华人民共和国女性公民（是true，否false）：");
        country = reader.nextBoolean();
        System.out.print("学历(本科以上true，其他false)：");
        education = reader.nextBoolean();

        //创建对象及判断
        Miss per = new Miss(age, marriage, country, education);
        if(per.judge() == 1)
        {
            System.out.println("符合条件，允许参赛");
        }
        else
        {
            System.out.println("不符合条件，不可参赛");
        }
    }
}
