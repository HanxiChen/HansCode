//
// Created by hanxi on 2020/8/9.
//
//指针变量示例
/*
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, temp;
    int *p1 = NULL, *p2 = NULL;
    cin >> a >> b;
    p1 = &a;
    p2 = &b;
    if(*p1 < *p2)//*p1代表a，*p2代表b
    {
        temp = *p1; *p1 = *p2; *p2 = temp;
    }
    cout << "max = " << *p1 << ", min = " << *p2 << endl;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0;
    int *p1 = NULL, *p2 = NULL;
    int *temp = NULL;
    cin >> a >> b;
    p1 = &a;
    p2 = &b;
    if(*p1 < *p2)//*p1代表a，*p2代表b
    {
        temp = p1; p1 = p2; p2 = temp;//把p1和p2的内容交换，即a和b的地址交换，p1指向b、p2指向a
    }
    cout << "max = " << *p1 << ", min = " << *p2 << endl;
    return 0;
}
*/