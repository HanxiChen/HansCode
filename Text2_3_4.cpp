//
// Created by hanxi on 2020/8/9.
//
//括号匹配问题
/*
#include <iostream>
#include <cstring>
using namespace std;
void match(char str[], int flag[], int n)
{
    if(strlen(str) != n)
    {
        if(str[n] != ')')
            match(str, flag, n+1);
        else{
            int i = n - 1;
            while(i >= 0 && (str[i] != '(' || flag[i] == 1))
                i--;
            if(i != -1 && str[i] == '(' && flag[i] == 0){
                flag[i] = 1;
                flag[n] = 1;
            }
            match(str, flag, n + 1);
        }
    }
}

int main()
{
    char str[100];
    while(cin.getline(str, 101))
    {
        int flag[100] = {0};
        match(str, flag, 0);
        cout << str << endl;

        for(int i = 0; i < strlen(str); i++)
        {
            if(flag[i] == 0){
                if(str[i] == '(')
                    cout << '$';
                else if(str[i] == ')')
                    cout << '?';
                else
                    cout << ' ';
            } else
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
 */