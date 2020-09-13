package edu6;
class Student
{
    String name;
    int age;
    public Student()
    {
        System.out.println("Student6_2()构造方法被调用");
    }

    public Student(String newName)
    {
        name = newName;
        System.out.println("Student6_2(String newName)构造方法被调用");
    }

    public Student(String newName, int newAge)
    {
        name = newName;
        age = newAge;
        System.out.println("Student6_2(String newName, int newAge)构造方法被调用");
    }
}
public class edu6_2 {
    public static void main(String[] args)
    {
        Student s1 = new Student();
        Student s2 = new Student("张三");
        Student s3 = new Student("李四", 15);
    }
}
