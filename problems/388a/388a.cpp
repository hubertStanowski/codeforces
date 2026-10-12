#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

bool check(int k, auto &x, int n) {
  for (int i = 0; i < n; i++) {
    if (x[i] < i / k) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  vi x(n);
  for (auto &curr : x) {
    cin >> curr;
  }
  sort(x.begin(), x.end());
  int left = 1, right = n, mid;
  while (left <= right) {
    mid = left + (right - left) / 2;

    if (check(mid, x, n)) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }

  cout << left;

  return 0;
}