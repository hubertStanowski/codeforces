#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num);

int main() {
  int n, m;
  bool valid = false;
  int const LIMIT = 50;
  cin >> n >> m;

  for (int i = n + 1; i <= LIMIT; i++) {
    if (is_prime(i)) {
      valid = (i == m);
      break;
    }
  }

  if (valid) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}

bool is_prime(int num) {
  int div = 2;
  while (div * div <= num) {
    if (num % div == 0)
      return false;
    div++;
  }
  return true;
}