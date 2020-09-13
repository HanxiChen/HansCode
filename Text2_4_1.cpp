//
// Created by hanxi on 2020/8/11.
//
//计算矩阵边缘元素之和
/*
#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int m, n;
    int a[100][100];
    while(k--) {
        int count = 0;
        cin >> m >> n;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        int (*p)[100];
        p = a;

        //第 0 行
        for(int j = 0; j < n; j++)
            count += *(*(p) + j);
        //第m - 1行
        for(int j = 0; j < n; j++)
            count += *(*(p + m - 1) + j);
        //第 0 列
        for(int i = 0; i < m; i++)
            count += *(*(p + i));
        //第n - 1列
        for(int i = 0; i < m; i++)
            count += *(*(p + i) + (n - 1));
        //减去四个角
        count = count - *(*(p)) - *(*(p) + (n - 1)) - *(*(p + m - 1)) - *(*(p + m - 1) + (n - 1));

        if(m == 1)
        {
            if(n == 1)
                count = a[0][0];
            else
                count = a[0][0] + a[0][n - 1];
        }

        cout << count << endl;
    }
    return 0;
}
*/