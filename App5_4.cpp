//
// Created by hanxi on 2020/7/25.
//
//整数排序——选择排序，找到最大的数字调换到前面
/*
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i = 0, j = 0;
    int temp = 0;
    for(i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
*/