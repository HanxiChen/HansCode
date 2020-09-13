//
// Created by hanxi on 2020/8/8.
//

//括号匹配简化版
/*
#include <iostream>
#include <string.h>
using namespace std;

bool b;
int f(char str[], int s)
{
    if(strlen(str) == s){
        return (b = true, -1);
    }
    else{
        if(str[s] == '('){
            int n;
            (b,n) = f(str, s + 1);
            if(b == false){
                return (b = false, n);
            }
            else{
                if(str[n] == ')')
                    return f(str, n + 1);
                else
                    return (b = false, n);
            }
        }
        else{
            return (b = true,s);
        }
    }
}
*/

//双递归（奇数偶数）
/*
isOdd(x)
{
    return isEven(x - 1);
}
isEven(x)
{
    return x == 0 || isOdd(x - 1);
}
 */
/*
#include <iostream>
using namespace std;
int b = 2;

int func(int *a){

    b += *a;

    return b;

}

int main( ){

    int a=2, res=2;

    res += func(&a);

    cout << res << endl;

    return 0;

}*/