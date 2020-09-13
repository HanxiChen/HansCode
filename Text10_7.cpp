//
// Created by hanxi on 2020/8/5.
//
//中位数
/*
#include <iostream>
using namespace std;
int main()
{
    int n, num[15000];
    while(cin >> n)
    {
        if(n == 0)
            break;

        for(int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        int midNum = 0, midNum1 = 0, Num = 0;
        for(int i = 0; i < n; i++)
        {
            int count = 0;
            Num = num[i];
            for(int j = 0; j < n; j++)
            {
                if(num[j] > Num)
                    count++;
            }
            if(count == n / 2)
                midNum = Num;
            if(count == n / 2 - 1)
                midNum1 = Num;
            if(midNum != 0 && midNum1 != 0)
                break;
        }

        if(n % 2 != 0)//奇数
            cout << midNum << endl;
        else//偶数
            cout << (midNum + midNum1) / 2 << endl;
    }
}
*/