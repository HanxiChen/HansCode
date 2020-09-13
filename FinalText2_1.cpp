//
// Created by hanxi on 2020/8/14.
//
//含k个3的数
/*
#include <iostream>
using namespace std;
int main()
{
    int m, k, count = 0;
    bool num = false;
    cin >> m >> k;
    if(m % 19 == 0)
    {
        while(m > 0)
        {
            if(m % 10 == 3)
                count++;
            m /= 10;
        }
        if(count == k)
            num = true;
    }
    if(num)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
*/