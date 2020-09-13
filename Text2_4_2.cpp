//
// Created by hanxi on 2020/8/11.
//
//二维数组右上左下遍历
/*
#include <iostream>
using namespace std;
int main()
{
    int row, col, array[100][100];
    int i = 0, j = 0;
    cin >> row >> col;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
    }

    for(int m = 0; m < col; m++)
    {
        for(i = 0, j = m; i <= m; i++,j--)
        {
            if(i < row)
                cout << array[i][j] << endl;
        }
    }

    for(int m = 1; m < row; m++) {
        for (i = m, j = col - 1; i <= m + col - 1; i++, j--)
        {
            if(i < row)
                cout << array[i][j] << endl;
        }
    }
    return 0;
}
*/