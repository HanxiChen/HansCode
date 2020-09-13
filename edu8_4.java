package edu8;
interface Achievement
{
    float average();
}
class Person1
{
    String name;
    int age;

    public Person1(String newName, int newAge)
    {
        name = newName;
        age = newAge;
    }
    public void introduce()
    {
        System.out.println("你好，我是" + name + "，今年" + age + "岁");
    }
}

class Student extends Person1 implements Achievement
{
    int chinese;
    int math;
    int english;

    public Student(String newName, int newAge)
    {
        super(newName,newAge);
    }

    public void setScore(int c, int m, int e)
    {
        chinese = c;
        math = m;
        english = e;
    }

    public float average()
    {
        return (chinese + math + english) / 3;
    }
}



public class edu8_4 {
    public static void main(String[] args){
        Student s1 = new Student("张三", 16);
        s1.introduce();
        s1.setScore(80,90,80);
        System.out.println("平均分是" + s1.average());
    }
}
