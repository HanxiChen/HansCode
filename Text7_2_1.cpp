//
// Created by hanxi on 2020/7/31.
//
//年龄与疾病
/*
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = n;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    while(i--)
    {
        int year;
        cin >> year;
        if(year <= 18)
        {
            count1++;
        }
        else if(year >= 19 && year <= 35)
        {
            count2++;
        }
        else if(year >= 36 && year <= 60)
        {
            count3++;
        }
        else if(year >= 60)
        {
            count4++;
        }
    }
    cout << fixed << setprecision(2) << "1-18: " << (double)count1 * 100 / n << '%' << endl;
    cout << fixed << setprecision(2) << "19-35: " << (double)count2 * 100 / n << '%' << endl;
    cout << fixed << setprecision(2) << "36-60: " << (double)count3 * 100 / n << '%' << endl;
    cout << fixed << setprecision(2) << "60-: " << (double)count4 * 100 / n << '%' << endl;
}
*/