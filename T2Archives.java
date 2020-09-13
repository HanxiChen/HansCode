package FinalTest;
class Archives
{
    protected int No;
    protected String Name;
    protected String Sex;
    protected int Age;

    public void show()
    {
        System.out.print("第" + No + "号员工，姓名" + Name + "，性别" + Sex + "，" + Age + "岁");
    }
}
class Laborage extends Archives
{
    private int SSalary;
    private int Security;
    private int Fsalary;
    public Laborage(int newNo, String newName, String newSex, int newAge, int newSSalary, int newSecurity)
    {
        No = newNo;
        Name = newName;
        Sex = newSex;
        Age = newAge;
        SSalary = newSSalary;
        Security = newSecurity;
    }
    public int Count()
    {
        return SSalary - Security;
    }
    public void Display()
    {
        show();
        System.out.print("，实发工资" + Count() + "元");
    }
}
public class T2Archives {
    public static void main(String[] args){
        Laborage lab = new Laborage(1001,"张三","男",21,2000,100);
        lab.Display();
    }
}
