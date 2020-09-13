//
// Created by hanxi on 2020/8/3.
//
//找和为K的两个元素
/*
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    int a[1000];
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n - 1; j++)
        {
            if(a[i] + a[j] == k)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
    }
    if(flag == 1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
 */