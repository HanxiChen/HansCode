//
// Created by hanxi on 2020/9/7.
//

#include <iostream>
#include <cstring>
using namespace std;
class Array2
{
private:
    int *a;
    int i, j;
public:
    int m, n;
    Array2();

    Array2(int i, int j);

    Array2(Array2 &k);


};
Array2::Array2()
{
    a = NULL;
}
Array2::Array2(int i, int j)
{
    m = i;
    n = j;
    a = new int[m * n];
}
Array2::Array2(Array2 &k)
{
    m = k.m;
    n = k.n;
    a = new int[m * n];
    memcpy(a, k.a, sizeof(int)*i*j);
}
int main() {
    Array2 a(3,4);
    int i,j;
    for( i = 0;i < 3; ++i )
        for( j = 0; j < 4; j ++)
            a[i][j] = i * 4 + j;
    for( i = 0;i < 3; ++i ) {
        for( j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b; b = a;
    for( i = 0;i < 3; ++i ) {
        for( j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}
