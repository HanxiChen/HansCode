//
// Created by hanxi on 2020/8/18.
//
//简单的学生信息处理程序实现
/*
#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    char name[10];
    char num[10];
    int age;
    int score[4];
public:
    void getName(char* Name)
    {
        strcpy(name, Name);
    }
    void getAge(int Age)
    {
        age = Age;
    }
    void getNum(char* Num)
    {
        strcpy(num, Num);
    }
    void getScore(int* Score)
    {
        for(int i = 0; i < 4; i++)
        {
            score[i] = Score[i];
        }
    }
    int getPerScore()
    {
        return (score[0] + score[1] + score[2] + score[3]) / 4;
    }
    void printStudent()
    {
        cout << name << ',' << age << ',' << num << ','<< getPerScore() << endl;
    }
};

int main()
{
    char name[10], num[10], mark;
    int age;
    int score[4];
    cin.getline(name, 10, ',');
    cin >> age >> mark;
    cin.getline(num, 10, ',');
    cin >> score[0] >> mark >> score[1] >> mark>> score[2] >> mark >> score[3];
    student s1;
    s1.getName(name);
    s1.getAge(age);
    s1.getNum(num);
    s1.getScore(score);
    s1.printStudent();
    return 0;
}
 */