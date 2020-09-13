package edu8;
import java.util.*;
class Person
{
    private String Name;//人名
    private String Time;//用餐时间

    //构造方法
    public Person(String Name, String Time)
    {
        this.Name = Name;
        this.Time = Time;
    }

    //用餐内容
    public void EatingShow(String Time)//
    {
        System.out.println(Name + "吃了" + Time);
    }
}

class Chinese extends Person
{
    public Chinese(String newName, String newTime)
    {
        super(newName,newTime);
    }

    public void EatingShow(String Time)
    {
        if(Time.equals("早餐"))
        {
            System.out.println("中国人早餐：包子，油条、粥和豆浆");
        }
        if(Time.equals("午餐"))
        {
            System.out.println("中国人午餐：米饭、馒头、蔬菜、肉类");
        }
        if(Time.equals("晚餐"))
        {
            System.out.println("中国人晚餐：粥、馒头、蔬菜和水果");
        }
    }
}

class Foreigners extends Person
{
    public Foreigners(String newName, String newTime)
    {
        super(newName,newTime);
    }

    public void EatingShow(String Time)
    {
        if(Time.equals("早餐"))
        {
            System.out.println("外国人早餐：面包加黄油、牛奶、火腿");
        }
        if(Time.equals("午餐"))
        {
            System.out.println("外国人午餐：汉堡、炸马铃薯、蔬菜");
        }
        if(Time.equals("晚餐"))
        {
            System.out.println("外国人晚餐：披萨、蔬菜、牛肉、水果、甜品、面包");
        }
    }
}
public class Hw8_1_Eating {
    public static void main(String[] args){
        Scanner reader = new Scanner(System.in);
        String name, time;
        int out;
        while(true)
        {
            System.out.print("请输入国别（中国人、外国人）:");
            name = reader.next();
            System.out.print("请输入用餐时间（早餐、午餐、晚餐）:");
            time = reader.next();
            if(name.equals("中国人"))
            {
                Person s1 = new Chinese(name,time);
                s1.EatingShow(time);
            }
            else
            {
                Person s1 = new Foreigners(name,time);
                s1.EatingShow(time);
            }
            //程序退出
            System.out.print("是否退出程序（退出--1，不退出--0）：");
            out = reader.nextInt();
            if(out == 1)
            {
                System.out.println("程序退出");
                break;
            }
            System.out.println();
        }
    }
}
