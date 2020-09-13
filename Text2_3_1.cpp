//
// Created by hanxi on 2020/8/8.
//
//单词翻转
/*
#include <iostream>
using namespace std;
int flip(char str[], int start, int final)
{
    char c = str[start];
    if(start != final)
    {
        flip(str, start + 1, final);
    }
    cout << c;
    return 0;
}
int main()
{
    char str[501];
    cin.getline(str,501);

    int start = 0, final = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0'))
        {
            final = i;
            flip(str, start, final);
        }
        if(str[i] == ' ' && str[i + 1] != ' ')
            start = i + 1;
        if(str[i] == ' ')
            cout << ' ';
    }
    return 0;
}
*/