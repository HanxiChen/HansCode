//
// Created by hanxi on 2020/8/5.
//
//异常细胞检测
/*
#include <iostream>
using namespace std;
int main()
{
    int cell[100][100];
    int N = 0, count = 0;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> cell[i][j];
        }
    }

    for(int i = 1; i < N - 1; i++)
    {
        for(int j = 1; j < N - 1; j++)
        {
            if(cell[i - 1][j] - cell[i][j] >= 50 && cell[i + 1][j] - cell[i][j] >= 50 && cell[i][j - 1] - cell[i][j] >= 50 && cell[i][j + 1] - cell[i][j] >= 50)
                count++;
        }
    }

    cout << count << endl;
    return 0;
}
*/