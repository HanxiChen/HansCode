//
// Created by hanxi on 2020/8/9.
//
//排队游戏
/*
#include <iostream>
#include <cstring>
using namespace std;

bool flag[100];
void match(char str[], int y)
{
    while(str[y] == str[0])
        y++;
    flag[y] = true;
    int i = y - 1;
    while(str[i] != str[0] || flag[i] == true)
        i--;
    flag[i] = true;
    cout << i << " " << y << endl;
    if(y != strlen(str) - 1)
        match(str,y + 1);
}
int main()
{
    char str[100];
    cin.getline(str, 100, '\n');
    match(str,0);
    return 0;
}
*/