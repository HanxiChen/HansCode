package edu8;
import java.util.*;

enum community//枚举
{ sport, writing, chess, singing }

class solution
{
    private String able;//人所擅长的领域

    public solution()//构造方法
    {

    }
    public solution(String able)//构造方法
    {
        this.able = able;
    }

    public void sport_judgement(String able)//体育
    {
        community r = community.sport;
        System.out.println("你适合加入" + r + "社团");
    }
    public void writing_judgement(String able)//书法
    {
        community r = community.writing;
        System.out.println("你适合加入" + r + "社团");
    }
    public void chess_judgement(String able)//下棋
    {
        community r = community.chess;
        System.out.println("你适合加入" + r + "社团");
    }
    public void singing_judgement(String able)//唱歌
    {
        community r = community.singing;
        System.out.println("你适合加入" + r + "社团");
    }
    public void traversal()//遍历所有枚举对象
    {
        for(community d:community.values())
        {
            System.out.print(d.name() + "社团 ");
        }
        System.out.println();
    }
}

public class Hw8_2_Community {
    public static void main(String[] args){
        Scanner reader = new Scanner(System.in);
        int measure;//用户操作
        String able;//用户擅长的
        while(true)
        {
            System.out.print("请输入操作（1查询社团，2咨询加入社团, 3退出）：");
            measure = reader.nextInt();
            if(measure == 1)//查询社团
            {
                solution person = new solution();
                person.traversal();
            }
            else if(measure == 2)//咨询加入社团
            {
                System.out.print("请输入你认为你擅长的：");
                able = reader.next();
                solution person = new solution(able);
                if(able.equals("体育"))
                {
                    person.sport_judgement(able);
                }
                else if(able.equals("音乐"))
                {
                    person.singing_judgement(able);
                }
                else if(able.equals("书法"))
                {
                    person.writing_judgement(able);
                }
                else if(able.equals("下棋"))
                {
                    person.chess_judgement(able);
                }
            }
            else//退出程序
            {
                System.out.println("程序结束");
                break;
            }
            System.out.println();
        }

    }
}
