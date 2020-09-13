package edu6;
import java.util.*;

class Plural//复数：a + bi
{
    //成员变量
    private int a, b, c, i;//a实部，b虚部，c实数，i循环变量
    private int funum, shinum;//funum复数的个数，shinum实数的个数
    private int[] shibu = new int[100];//实部数组
    private int[] xubu = new int[100];//虚部数组
    private int[] num = new int[100];//实数数组
    //构造方法
    public Plural(int shibu[], int xubu[], int num[], int fushu, int shishu)//实数对象
    {
        this.shibu = shibu;
        this.xubu = xubu;
        this.num = num;
        funum = fushu;
        shinum = shishu;
    }
    //成员方法
    //复数与复数之间的相加
    void add1()
    {
        a = shibu[0]; b = xubu[0];
        for(i = 1; i < funum; i++)
        {
            a += shibu[i];
            b += xubu[i];
        }
        System.out.println("结果为：" + a + " + （" + b + "i）");
    }
    //复数与复数之间的相加
    void sub1()
    {
        a = shibu[0]; b = xubu[0];
        for(i = 1; i < funum; i++)
        {
            a -= shibu[i];
            b -= xubu[i];
        }
        System.out.println("结果为：" + a + " + （" + b + "i)");
    }
    //复数与实数之间的相加
    void add2()
    {
        a = shibu[0]; b = xubu[0];
        for(i = 1; i < funum; i++)
        {
            a += shibu[i];
            b += xubu[i];
        }
        for(i = 0; i < shinum; i++)
        {
            a += num[i];
        }
        System.out.println("结果为：" + a + " + (" + b + "i)");
    }
    //复数与实数之间的相减
    void sub2()
    {
        a = shibu[0]; b = xubu[0];
        for(i = 1; i < funum; i++)
        {
            a -= shibu[i];
            b -= xubu[i];
        }
        for(i = 0; i < shinum; i++)
        {
            a -= num[i];
        }
        System.out.println("结果为：" + a + " + (" + b + "i)");
    }
    //复数之间相乘
    void multiply()
    {
        a = shibu[0] * shibu[1] - xubu[0] * xubu[1];
        b = xubu[0] * shibu[1] + shibu[0] * xubu[1];
        for(i = 2; i < funum; i++)
        {
            int m = a, n = b;
            a = m * shibu[i] - n * xubu[i];
            b = n * shibu[i] + m * xubu[i];
        }
        System.out.println("结果为：" + a + " + (" + b + "i)");
    }
    //复数之间相除
    void division()
    {
        a = (shibu[0] * shibu[1] + xubu[0] * xubu[1]) / (shibu[1] * shibu[1] + xubu[1] * xubu[1]);
        b = (xubu[0] * shibu[1] - shibu[0] * xubu[1]) / (shibu[1] * shibu[1] + xubu[1] * xubu[1]);
        for(i = 2; i < funum; i++)
        {
            int m = a , n = b;
            a = (m * shibu[i] + n * xubu[i]) / (shibu[i] * shibu[i] + xubu[i] * xubu[i]);
            b = (n * shibu[i] - m * xubu[i]) / (shibu[i] * shibu[i] + xubu[i] * xubu[i]);
        }
        System.out.println("结果为：" + a + " + (" + b + "i)");
    }
}
public class hw6_2Plural {
    public static void main(String[] args)
    {
        int n = 0, m = 0;//n复数的个数，m实数的个数
        int a, b, c;//实部、虚部、实数
        int operate;//操作
        int i = 0, j = 0;//循环变量
        Scanner reader = new Scanner(System.in);
        System.out.print("请输入操作（复数与复数相加1、复数与实数相加2、复数与复数相减3、复数与实数相减4、复数之间乘5、复数之间除6）：");
        operate = reader.nextInt();

        //创建对象
        System.out.print("请输入需要计算的复数个数：");
        n = reader.nextInt();
        int[] shibu = new int[n];//创建实部数组
        int[] xubu = new int[n];//创建虚部数组
        int[] num = new int[n];//创建实数数组
        for(i = 0; i < n; i++)
        {
            System.out.print("请输入第" + (i+1) + "个复数的实部和虚部：");
            a = reader.nextInt();
            b = reader.nextInt();
            shibu[i] = a;
            xubu[i] = b;
        }
        if(operate == 2 || operate == 4)
        {
            System.out.print("请输入需要计算的实数个数：");
            m = reader.nextInt();
            for(j = 0; j < m; j++)
            {
                System.out.print("请输入第" + (j+1) + "个实数：");
                c = reader.nextInt();
                num[j] = c;
            }
        }
        Plural plural = new Plural(shibu, xubu, num, n, m);//创建复数对象
        //测试
        //复数与复数相加
        if(operate == 1)
        {
            plural.add1();
        }
        //复数与复数相减
        if(operate == 3)
        {
            plural.sub1();
        }
        //复数与实数相加
        if(operate == 2)
        {
            plural.add2();
        }
        //复数与实数相减
        if(operate == 4)
        {
            plural.sub2();
        }
        //复数之间相乘
        if(operate == 5)
        {
            plural.multiply();
        }
        //复数之间相除
        if(operate == 6)
        {
            plural.division();
        }
    }
}
