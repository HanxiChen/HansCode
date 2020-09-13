//
// Created by hanxi on 2020/8/7.
//
//发票统计
/*
#include <iostream>
#include <iomanip>
using namespace std;
int id;
float countP[4], countA = 0, countB = 0, countC = 0;
void count(char, float);
int main()
{
    int num = 0, n = 1;
    float money = 0;
    char ch;
    while(n <= 3)
    {
        cin >> id >> num;
        while(num--)
        {
            cin >> ch >> money;
            count(ch,money);
        }
        n++;
    }
    for(int i = 1; i <= 3; i++)
    {
        cout << fixed << setprecision(2) << i << " " << countP[i] << endl;
    }
    cout << 'A' << " " << countA << endl;
    cout << 'B' << " " << countB << endl;
    cout << 'C' << " " << countC << endl;
}

void count(char ch, float money)
{
    switch(id)
    {
        case 1: countP[1] += money; break;
        case 2: countP[2] += money; break;
        case 3: countP[3] += money; break;
    }
    switch(ch)
    {
        case 'A': countA += money; break;
        case 'B': countB += money; break;
        case 'C': countC += money; break;
    }
}
 */