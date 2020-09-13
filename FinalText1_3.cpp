//
// Created by hanxi on 2020/8/5.
//
//最远距离
/*
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double xy[n][2], X, Y, dis = 0, distance = 0, max = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> X >> Y;
        xy[i][0] = X;
        xy[i][1] = Y;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            dis = (xy[i][0] - xy[j][0]) * (xy[i][0] - xy[j][0]) + (xy[i][1] - xy[j][1]) * (xy[i][1] - xy[j][1]);
            distance = sqrt(dis);
            if(distance > max)
                max = distance;
        }

    }
    cout << fixed << setprecision(4) << max << endl;
    return 0;
}
*/