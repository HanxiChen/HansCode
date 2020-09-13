//
// Created by hanxi on 2020/8/7.
//
//流感传染（模拟）
/*
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;

    char a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> m;
    while(m--)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[i][j] == '@')
                {
                    if(i - 1 >= 0 && a[i - 1][j] == '.')
                        a[i - 1][j] = '!';
                    else if(j - 1 >= 0 && a[i][j - 1] == '.')
                        a[i][j - 1] = '!';
                    else if(j + 1 <= n - 1 && a[i][j + 1] == '.')
                        a[i][j + 1] = '!';
                    else if(i + 1 <= n - 1 && a[i+1][j] == '.')
                        a[i+1][j] = '!';
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == '!')
                    a[i][j] = '@';
            }
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == '@')
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
*/