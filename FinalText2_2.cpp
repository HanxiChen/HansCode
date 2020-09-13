//
// Created by hanxi on 2020/8/14.
//
//字符串中次数第二多的字母
/*
#include <iostream>
using namespace std;
int main()
{
    char str[501];
    char ch[26] = {0}; int num = 0;
    cin.getline(str,501);

    //找到出现的不同的字符
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] <= 90)
            str[i] += 32;

        bool in = false;
        if(str[i] >= 97 && str[i] <= 122)
        {
            for(int j = 0; ch[j] != '\0'; j++)
            {
                if(str[i] == ch[j])
                {
                    in = true;
                    break;
                }
            }
            if(!in)
            {
                ch[num] = str[i];
                num++;
            }
        }
    }

    //计算各个字符出现的次数
    int max[num], findMax = 0;
    for(int i = 0; i < num; i++)
    {
        int count = 0;
        for(int j = 0; str[j] != '\0'; j++)
        {
            if(ch[i] == str[j])
                count++;
        }
        if(findMax < count)
            findMax = count;
        max[i] = count;
    }

    //找到第二大的
    for(int i = 0; i < num; i++)
    {
        if(max[i] == findMax)
            max[i] = 0;
    }
    int findSecond = 0;
    for(int i = 0; i < num; i++)
    {
        if (findSecond < max[i])
        {
            findSecond = max[i];
        }
    }
    int i = 0;
    for( ; i < num; i++)
    {
        if(findSecond == max[i])
            break;
    }

    cout << (char)(ch[i] - 32) << "+" << ch[i] << ":" << max[i] << endl;
    return 0;
}
*/