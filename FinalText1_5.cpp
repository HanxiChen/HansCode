//
// Created by hanxi on 2020/8/5.
//
//字符串插入
/*
#include <iostream>
using namespace std;
int main()
{
    int flag = 0;
    char str[11] = {0}, substr[4] = {0}, max;
    while(cin >> str >> substr)
    {
        for(int i = 0; str[i] != '\0'; i++)
        {
            if(str[i] > max)
            {
                max = str[i];
                flag = i;
            }
        }
        int j = 0;
        for(int i = flag + 1; j < 3; i++)
        {
            str[i + 3] = str[i];
            str[i] = substr[j];
            j++;
        }
        for(int i = 0; str[i] != '\0'; i++)
        {
            cout << str[i];
        }
        cout << endl;

    }
    return 0;
}
*/


