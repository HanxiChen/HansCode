//
// Created by hanxi on 2020/8/7.
//
//Tomorrow never knows?
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int year, month, day;
    int flag = 0;//flag为0时，day自加1；flag为1时day下个月第一天，月自加1
    char ch;
    cin >> year >> ch >> month >> ch >> day;
        if (day > 0 && day < 28)
            day++;
        else if (day == 28 || day == 29)//区别闰年和平年
        {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day == 29)//闰年2月29
                {
                    month++;
                    day = 1;
                } else//闰年2月28
                    day++;
            } else//平年2月28
            {
                day = 1;
                month++;
            }
        } else if (day == 30 || day == 31 && month != 12) {
            if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10)) {
                if (day == 31) {
                    month++;
                    day = 1;
                } else
                    day++;
            } else {
                month++;
                day = 1;
            }
        }

        if (month == 12 && day == 31) {
            year++;
            month = 1;
            day = 1;
        } else if (month == 12 && day == 30) {
            day++;
        }
        cout << year << "-" << setw(2) << setfill('0') << month << "-" << setw(2) << setfill('0') << day << endl;

    return 0;
}
*/