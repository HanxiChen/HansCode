//
// Created by hanxi on 2020/7/25.
//
//鸡兔同笼问题，最多和最少有多少只动物
//思路：先判断输入的脚数是否为奇数，再判断脚数是否为4的倍数
/*
#include <iostream>
using namespace std;
int main()
{
    int nCases, i, nFeet;//nCases表示输入测试数据的组数，nFeet表示输入的脚数
    cin >> nCases;
    for(i = 0; i < nCases; i++)
    {
        cin >> nFeet;
        if(nFeet % 2 != 0)//如果有奇数只脚，则输入不正确
        {
            cout << "0 0" << endl;
        }
        else if(nFeet % 4 != 0)//nFeet = 6,最少2只，最多3只
        {
            cout << nFeet / 4 + 1 << " " << nFeet / 2 << endl;
        }
        else{//nFeet = 8，最少2只，最多4只
            cout << nFeet / 4 << " " << nFeet / 2 << endl;
        }
    }
}
 */