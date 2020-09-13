//
// Created by hanxi on 2020/9/7.
//
/*
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Complex {
private:
    double r,i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    Complex& operator=(char* s)
    {
        int ii = 0;
        char cr[100];

        while(*s != '+')
        {
            cr[ii] = *s;
            s++;
            ii++;
        }
        cr[ii] = '\n';
        s++;

        r = atoi(cr);
        i = atoi(s);
    }
};
int main() {
    Complex a;
    a = "3+4i"; a.Print();
    a = "5+6i"; a.Print();
    return 0;
}
 */