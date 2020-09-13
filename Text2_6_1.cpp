//
// Created by hanxi on 2020/8/13.
//
//分配病房
/*
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
    int m; float hurt;
    cin >> m >> hurt;
    float a[m][2];
    int i = 0, sum = 0;
    for(i = 0; i < m; i++)
    {
        int id; float perHurt;
        cin >> id >> perHurt;
        if(perHurt >= hurt){
            a[sum][0] = id; a[sum][1] = perHurt;
            sum++;
        }
    }

    for(i = 0; i < sum - 1; i++)
    {
        for(int j = i + 1; j < sum; j++)
        {
            if(a[j][1] > a[i][1])
            {
                float temp = a[i][1]; a[i][1] = a[j][1]; a[j][1] = temp;
                temp = a[i][0]; a[i][0] = a[j][0]; a[j][0] = temp;
            }
        }
    }
    bool boolTrue = false;
    for(i = 0; i < sum; i++)
    {
        cout << setw(3) << setfill('0') << a[i][0] << " ";
        printf("%.1lf\n", a[i][1]);
        boolTrue = true;
    }

    if(!boolTrue)
        cout << "None." << endl;
    return 0;
}
*/