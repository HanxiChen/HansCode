//
// Created by hanxi on 2020/7/25.
//
//分出奇偶数
/*
#include <iostream>
using namespace std;
int main()
{
    int all[10], odd[10], even[10];
    int i = 0, j = 0;
    for( ; i < 10; i++)
    {
        cin >> all[i];
    }

    int numOdd = 0;
    int numEven = 0;
    for(i = 0; i < 10; i++)
    {
        if(all[i] % 2 != 0)//奇数
        {
            odd[numOdd] = all[i];
            numOdd++;
        }
        else//偶数
        {
            even[numEven] = all[i];
            numEven++;
        }
    }
    for(i = 0; i < numOdd; i++)
    {
        cout << odd[i] << " ";
    }
    for(i = 0; i < numEven; i++)
    {
        cout << even[i] << " ";
    }
    return 0;
}
*/