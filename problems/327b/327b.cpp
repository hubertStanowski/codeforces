#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main() {
  int n;
  cin >> n;

  int limit = 10000000;

  for (int curr = limit - n + 1; curr <= limit; curr++) {
    cout << curr << ' ';
  }
  return 0;
}