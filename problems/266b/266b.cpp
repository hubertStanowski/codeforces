#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, t;
    string curr;
    string next;
    cin >> n >> t;
    cin >> curr;

    for (int i = 0; i < t; i++) {
        next = curr;
        for (int j = 0; j < n-1; j++) {
            if (curr[j] == ('B') && curr[j+1] == ('G')) {
                next[j] = 'G';
                next[j+1] = 'B';
            }
        }
        curr = next;
    }
    cout << curr;
    return 0;
}
