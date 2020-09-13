//
// Created by hanxi on 2020/8/13.
//
//寻找山顶
/*
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            bool mountain = true;
            if(mountain && i - 1 >= 0){
                if(a[i][j] < a[i - 1][j])
                    mountain = false;
            }
            if(mountain && i + 1 < m){
                if(a[i][j] < a[i + 1][j])
                    mountain = false;
            }
            if(mountain && j - 1 >= 0){
                if(a[i][j] < a[i][j - 1])
                    mountain = false;
            }
            if(mountain && j + 1 < n){
                if(a[i][j] < a[i][j + 1])
                    mountain = false;
            }

            if(mountain)
                cout << i << " " << j << endl;
        }
    }
    return 0;
}
*/