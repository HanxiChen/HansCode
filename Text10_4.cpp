//
// Created by hanxi on 2020/8/4.
//
//矩阵交换行
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num[5][5];
    int c1 = 0, c2 = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> num[i][j];
        }
    }
    cin >> c1 >> c2;
    if(!(c1 >= 0 && c1 < 5 && c2 >= 0 && c2 <5))
    {
        cout << "error" << endl;
    }
    else{
        for(int i = 0; i < 5; i++)
        {
            int temp = num[c1][i];
            num[c1][i] = num[c2][i];
            num[c2][i] = temp;
        }

        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                cout << setw(4) << num[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
*/