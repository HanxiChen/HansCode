//
// Created by hanxi on 2020/8/13.
//
//配对碱基链
/*
#include <iostream>
using namespace std;
char match(char ch)
{
    char ch1;
    switch (ch) {
        case 'A': ch1 = 'T'; break;
        case 'T': ch1 = 'A'; break;
        case 'C': ch1 = 'G'; break;
        case 'G': ch1 = 'C'; break;
    }
    return ch1;
}
int main()
{
    int n;
    cin >> n;
    cin.get();
    while(n--)
    {
        char DNA[256], mDNA[256];
        cin.getline(DNA,256);
        int i = 0;
        for(i = 0; DNA[i] != '\0'; i++)
        {
            mDNA[i] = match(DNA[i]);
        }

        for(int j = 0; j < i; j++)
        {
            cout << mDNA[j];
        }
        cout << endl;
    }
    return 0;
}
*/