//
// Created by hanxi on 2020/8/14.
//
//寻找平面上的极大点
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][2];
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[i][0] = x; a[i][1] = y;
    }

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][0] == a[j][0] && a[i][1] != a[j][1] && a[i][0] >= 0)
            {
                count++;
                if(a[i][1] >= a[j][1])
                {
                    a[j][0] = -1; a[j][1] = -1;
                }
                else{
                    a[i][0] = -1; a[i][1] = -1;
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(((a[i][0] > a[j][0] && a[i][1] > a[j][1] ) || (a[i][0] > a[j][0] && a[i][1] == a[j][1])) && a[j][0] >= 0)
            {
                count++;
                a[j][0] = -1; a[j][1] = -1;
            }
        }
    }

    int i = 0, j = 0; count = n - count;
    for(i = 0; i < n; i++)
    {
        int flag = 0;
        if(a[i][0] >= 0)
        {
            int min = a[i][0];  flag = i;
            for (j = 0; j < n; j++) {
                if (min > a[j][0] && a[j][0] >= 0) {
                    min = a[j][0];
                    flag = j;
                }
            }
            if (count == 1) {
                cout << "(" << a[flag][0] << "," << a[flag][1] << ")";
                break;
            } else {
                cout << "(" << a[flag][0] << "," << a[flag][1] << ")" << ",";
                count--;
            }
            a[flag][0] = -1; a[flag][1] = -1;
            i = -1;
        }
    }
    return 0;
}

*/