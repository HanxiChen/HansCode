//
// Created by hanxi on 2020/8/11.
//
//文字排版
/*
#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

int main() {
    int n, len = 0, maxlen = 80;
    cin >> n;
    getchar();
    while (n > 0)
    {
        char str[40] = "";
        for (int i = 0; i < 40; i++)
        {
            str[i] = getchar();
            if (str[i] == ' ' || str[i] == '\n') {
                n--;
                break;
            }
        }
        len += strlen(str);
        if (len - 1 > maxlen) {
            len = strlen(str);
            cout << endl;
        }
        cout << str;
    }
    return 0;
}
 */