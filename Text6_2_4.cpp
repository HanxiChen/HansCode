//
// Created by hanxi on 2020/7/28.
//
//最大奇数和最小偶数的差的绝对值
/*
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;//n为输入的数
    int max = -1, min = 100, res = 0;//max为最大的奇数，min为最小的偶数，res为输出结果
    for(int i = 0; i < 6; i++)
    {
        cin >> n;
        if(n % 2 == 0)//偶数
        {
            if(n < min)//与最小的偶数比较
            {
                min = n;
            }
        }
        else//奇数
        {
            if (n > max)//与最大的奇数比较
            {
                max = n;
            }
        }
    }
    res = max - min;
    cout << abs(res) << endl;
    return 0;
}
*/