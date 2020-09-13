package edu7;
import java.util.*;
class Archives
{
    protected int No;//编号
    protected String Name;//姓名
    protected String Sex;//性别
    protected int Age;//年龄

    void Show()//显示员工档案
    {
        System.out.println("职工号No" + No + ",姓名" + Name + ",性别" + Sex + "，年龄" + Age);
    }
}
class Laborage extends Archives
{
    private int SSalary;//应发工资
    private int Security;//社保金
    private int Fsalary;//实发工资

    public Laborage(int No, String Name, String Sex, int Age, int money1, int money2)//money1应发工资，money2社保金
    {
        this.No = No;
        this.Name = Name;
        this.Sex = Sex;
        this.Age = Age;
        SSalary = money1;
        Security = money2;
    }
    public void Count()//计算实发工资
    {
        Fsalary = SSalary - Security;
    }
    public void Display()//显示职工档案与工资
    {
        if(Fsalary >= 0)
        {
            System.out.println("职工号No" + No + "，姓名" + Name + "，性别" + Sex + "，年龄" + Age + "岁，工资" + Fsalary);
        }
        else
        {
            System.out.println("error：实 发工资小于0，员工社保金大于员工应发工资。");
        }
    }
}
public class hw7_1EmployeeFiles {
    public static void main(String[] args)
    {
        String Name, Sex;//Name姓名， Sex性别
        int No, Age, SSalary, Security;//No编号，Age年龄，SSalary应发工资，Security社保金
        Scanner reader = new Scanner(System.in);
        System.out.print("请输入员工编号：");
        No = reader.nextInt();
        reader.nextLine();//吸收换行符
        System.out.print("请输入员工姓名：");
        Name = reader.nextLine();
        System.out.print("请输入员工性别：");
        Sex = reader.nextLine();
        System.out.print("请输入员工年龄：");
        Age = reader.nextInt();
        System.out.print("请输入员工应发工资：");
        SSalary = reader.nextInt();
        System.out.print("请输入员工社保金：");
        Security = reader.nextInt();

        Laborage employee1 = new Laborage(No, Name, Sex, Age, SSalary, Security);//创建员工对象
        employee1.Count();//计算员工的实发工资
        employee1.Display();//显示职工档案与工资
    }

}
