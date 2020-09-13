package edu5;

class Person
{
    //成员变量
    String name;
    int age;
    String sex;
    String job;
    //成员方法
    void setperson(String name, int age, String sex, String job)
    {
        this.name = name;
        this.age = age;
        this.sex = sex;
        this.job = job;
    }
}

public class hw5_1Person{
    public static void main(String[] args)
    {
        Person hans = new Person();
        hans.setperson("陈汉熙", 19, "男", "学生");
        System.out.println("我是" + hans.name + ",性别" + hans.sex + ",今年" + hans.age + "岁" + ",职业" + hans.job);
    }
}
