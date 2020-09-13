package FinalTest;
class Student31
{
    String name;
    int age;
    public Student31()
    {
        System.out.println("Student()构造方法被调用");
    }
    public Student31(String newName)
    {
        this.name = newName;
        System.out.println("Student(String newName)构造方法被调用");
    }
    public Student31(String newName, int newAge)
    {
        this.name = newName;
        this.age = newAge;
        System.out.println("Student(String newName, int newAge)构造方法被调用");
    }
}

public class Constructor {
    public static void main(String[] args){
        Student31 s1 = new Student31();
        Student31 s2 = new Student31("张三");
        Student31 s3 = new Student31("李四", 15);
    }
}
