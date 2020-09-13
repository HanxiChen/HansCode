//
// Created by hanxi on 2020/8/8.
//
//角谷猜想
/*
#include <iostream>
using namespace std;
int guess(int n)
{
    if(n == 1)
        return 1;
    int num = 0;
    if(n % 2 == 0)//偶数
    {
        num = n / 2;
        cout << n << "/" << 2 << "=" << num << endl;
    }
    else{//奇数
        num = n * 3 + 1;
        cout << n << "*" << 3 << "+" << 1 << "=" << num << endl;
    }
    if(num != 1)
        guess(num);
    else
        return 1;
}
int main()
{
    int n, m;
    cin >> n;
    m = guess(n);

    if(m == 1)
        cout << "End" << endl;
    return 0;
}
 */