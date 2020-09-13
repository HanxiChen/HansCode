package FinalTest;
class SchoolA
{
    String name;
    public class StudentA
    {
        String name;
        int age;
        public StudentA(String schoolName, String studentName, int newAge)
        {
            SchoolA.this.name = schoolName;
            this.name = studentName;
            age = newAge;
        }
        public void output()
        {
            System.out.println("学校：" + SchoolA.this.name);
            System.out.println("姓名：" + this.name);
            System.out.println("年龄：" + this.age);
        }
    }
    public void output()
    {
        StudentA stu = new StudentA("金融学院","张三", 24);
        stu.output();
    }
}
public class Inner {
    public static void main(String[] args){
        System.out.println("--通过外部类成员访问内部类成员--");
        SchoolA a = new SchoolA();
        a.output();
        System.out.println("--直接访问内部类成员--");
        SchoolA.StudentA b = a.new StudentA("金融学院","张三",23);
        b.output();
    }
}
