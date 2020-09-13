//
// Created by hanxi on 2020/8/5.
//
//校门外的树
/*
#include <iostream>
using namespace std;
int main()
{
    int x = 0, y = 0;
    int L = 0, M = 0;
    cin >> L >> M;
    int Tree[10001] = {0};
    while(M--)
    {
        cin >> x >> y;
        for(int i = x; i <= y; i++)
        {
            Tree[i] = 1;
        }
    }

    int count = 0;

    for(int i = 0; i <= L; i++)
    {
        if(Tree[i] == 0)
            count++;
    }
    cout << count << endl;
}
*/