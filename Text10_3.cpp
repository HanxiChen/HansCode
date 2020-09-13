//
// Created by hanxi on 2020/8/4.
//
//最长的单词2
/*
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int count = 0, max = 0;
    char str[500];
    cin.getline(str,500);

    char Max[500] = {0};
    for(int i = 0; str[i] != ' ' && str[i] != '.' && str[i] != '\0'; i++)
    {
        Max[i] = str[i];
        max++;
    }

    char com[500] = {0};   int j = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {

        if(str[i] != ' ' && str[i] != '.')
        {
            com[j] = str[i];
            count++;
            j++;
        }
        else{
            if(count > max)
            {
                max = count;
                strcpy(Max,com);
            }
            for(int k = 0; k < count; k++)
            {
                com[k] = '0';
            }
            count = 0; j = 0;
        }
    }

    cout << Max << endl;
    return 0;
}
*/