//
// Created by hanxi on 2020/8/4.
//
//忽略大小写比较字符串大小
/*
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    char result;
    char s1[80], s2[80];

    cin.getline(s1, 80);
    cin.getline(s2, 80);

    //判断出哪一位不同
    while(s1[i] != '\0' && (s1[i] - 32 == s2[i] || s1[i] + 32 == s2[i] || s1[i] == s2[i]))
    {
        i++;
    }

    //换到大写字母进行比较
    if(s1[i] < 97)
    {
        s1[i] = s1[i] + 32;
    }
    if(s2[i] < 97)
    {
        s2[i] = s2[i] + 32;
    }

    //比较
    if(s1[i] > s2[i])
    {
        result = '>';
    }
    else if(s1[i] < s2[i])
    {
        result = '<';
    }
    else
    {
        result = '=';
    }
    cout << result << endl;
    return 0;
}
*/