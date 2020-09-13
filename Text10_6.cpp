//
// Created by hanxi on 2020/8/5.
//
//循环移动
/*
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k = 0;
    for(int i = n - m; i < n; i++)
    {
        for(int j = i; j > k; j--)
        {
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
        }
        k++;
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
*/