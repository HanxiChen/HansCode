//
// Created by hanxi on 2020/7/31.
//
//找出第k大的数
/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int findK[n];
    for (int i = 0; i < n; i++) {
        cin >> findK[i];
    }
    int kMax = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        kMax = findK[i];
        for (int j = 0; j < n; j++) {
            if (findK[j] > kMax) {
                count++;
            }
        }
        if (count == k - 1) {
            break;
        }
    }

    cout << kMax << endl;
}
*/