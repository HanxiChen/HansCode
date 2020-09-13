package Homework;
import java.util.*;
class AL
{
    //成员方法
    private String Name;//姓名
    private String Phone;//电话号码
    private String Email;//邮箱
    private String Address;//家庭地址
    private static int num;//人数

    //构造方法
    public AL(String Name, String Phone, String Email, String Address)
    {
        this.Name = Name;
        this.Phone = Phone;
        this.Email = Email;
        this.Address = Address;
        num++;
    }

    //方法
    //显示各个人的信息
    public static void ALShow(AL[] per)
    {
        for(int i = 0; i < num; i++)
        {
            System.out.print("第" + (i + 1) + "个人的信息： ");
            System.out.print("姓名：" + per[i].Name + " ");
            System.out.print("电话号码：" + per[i].Phone + " ");
            System.out.print("邮箱：" + per[i].Email + " ");
            System.out.print("家庭地址：" + per[i].Address + "\n");
        }
    }
    //查找内容
    public static void ALFind(AL[] per, String Find)
    {
        for(int i = 0; i < num; i++)
        {
            if(per[i].Name.equals(Find) || per[i].Phone.equals(Find) || per[i].Email.equals(Find) || per[i].Address.equals(Find))
            {
                System.out.print("需要查找的是第" + (i + 1) + "个人的信息： ");
                System.out.print("姓名：" + per[i].Name + " ");
                System.out.print("电话号码：" + per[i].Phone + " ");
                System.out.print("邮箱：" + per[i].Email + " ");
                System.out.print("家庭地址：" + per[i].Address + "\n");
            }
        }
    }
}
public class Address_List {
    public static void main(String[] args)
    {
        int num;//通讯录上的人数
        String Name;//姓名
        String Phone;//电话号码
        String Email;//邮箱
        String Address;//地址
        String Find;//查找内容
        Scanner reader = new Scanner(System.in);
        System.out.print("请输入需要加上通讯录的人数：");
        num = reader.nextInt();

        //创造对象并传值
        AL[] per = new AL[num];//数组型对象
        for(int i = 0; i < num; i++)
        {
            System.out.print("请输入第" + (i+1) + "个人的姓名：");
            Name = reader.next();
            System.out.print("请输入第" + (i+1) + "个人的电话号码：");
            Phone = reader.next();
            System.out.print("请输入第" + (i+1) + "个人的邮箱：");
            Email = reader.next();
            System.out.print("请输入第" + (i+1) + "个人的家庭住址：");
            Address = reader.next();
            per[i] = new AL(Name, Phone, Email, Address);
        }

        //输出通讯录各种信息
        AL.ALShow(per);

        //查找信息
        System.out.print("请输入需要查找的信息：");
        Find = reader.next();
        AL.ALFind(per, Find);
    }
}
