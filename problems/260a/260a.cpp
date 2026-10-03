#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, n, next;
  long long result = -1;
  cin >> a >> b >> n;

  for (int digit = 0; digit < 10; digit++) {
    next = a * 10 + digit;
    if (next % b == 0) {
      result = next;
      break;
    }
  }

  cout << result;
  if (result != -1) {
    for (int i = 0; i < n - 1; i++)
      cout << 0;
  }

  return 0;
}