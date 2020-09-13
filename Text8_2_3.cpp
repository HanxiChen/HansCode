//
// Created by hanxi on 2020/8/3.
//
//买房子
/*
#include <iostream>
using namespace std;
int main()
{
    int N, K;
    while(cin >> N >> K)
    {
        double money = 0, house = 200;
        int count = 0;
        while(true)
        {
            count++;
            money += N;//拿工资

            if(money >= house || count > 20)//尝试买房
            {
                break;
            }

            house = house * (1 + K * 0.01);//房子涨价

        }
        if(count <= 20)
            cout << count << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}
*/