package edu5;
class Student
{
    String name;
    int age;
    int chinese;
    int math;
    int english;

    int total()
    {
        return chinese + math + english;
    }
    int average()
    {
        return (int)total() / 3;
    }
    void setStudent(String n, int a, int c, int m, int e)
    {
        name = n;
        age = a;
        chinese = c;
        math = m;
        english = e;
    }
}
