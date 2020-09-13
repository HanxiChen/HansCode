//
// Created by hanxi on 2020/8/4.
//
//素数统计
/*
#include <iostream>
using namespace std;
int main()
{
    bool prime = true;
    for(int i = 0; i < 100; i++)
    {
        prime = true;
        for(int j = 2; j < i;  j++)
        {
            if(i % j == 0)
            {
                prime = false;
            }
        }
        if(prime == true)
        {
            cout << i << endl;
        }
    }
    return 0;
}
*/
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int sum = 0, a[100] = {0};
    for(int i = 2; i < sqrt(100.0); i++)
    {
        sum = i;
        if(a[sum] == 0)
        {
            while(sum < 100)
            {
                sum = sum + i;
                if(sum < 100) a[sum] = 1;
            }
        }
    }
    for(int i = 2; i < 100; i++)
    {
        if(a[i] == 0)
            cout << i << " ";
    }
    return 0;
}
*/