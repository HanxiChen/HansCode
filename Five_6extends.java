package FinalTest;
interface Achievement
{
    public float average();
}
class Person62
{
    String name;
    int age;
    public Person62(String newName, int newAge)
    {
        name = newName;
        age = newAge;
    }
    public void introduce()
    {
        System.out.println("你好，我是" + name + "，今年" + age + "岁");
    }
}
class Student62 extends Person62 implements Achievement
{
    int chinese;
    int math;
    int english;
    public Student62(String newName, int newAge)
    {
        super(newName, newAge);
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
public class Five_6extends {
    public static void main(String[] args){
        Student62 s1 = new Student62("张三", 16);
        s1.introduce();
        s1.setScore(80,90,80);
        System.out.println("我的平均分是" + s1.average());
    }
}
