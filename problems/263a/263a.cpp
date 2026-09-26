// A2OJ 11.2 - https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n = 5;
    int mid = 3;
    int row;
    int col;
    int curr;

    for (row = 1; row <= n; row++) {
        for (col=1; col <= n; col++) {
            cin >> curr;
            if (curr == 1){
                int result =  abs(mid-row) + abs(mid-col);
                cout << result;
                return 0;
            } 
        }
    }
    return 1;
}