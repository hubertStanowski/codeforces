// from functools import lru_cache
// import sys

// def main():
//     lines = sys.stdin.read().splitlines()
//     t = int(lines[0])
//     cases = []
//     for line in lines[1:]:
//         cases.append(list(map(int, line.split())))

//     result = []
//     for n, k in cases:
//         result.append(dp(n, k, 0, 1))

//     return result

// @lru_cache
// def dp(n, k, day, money):
//     if n == day:
//         return 0
//     if n-day == k:
//         return 2*money + dp(n, k-1, day+1, 1)

//     wait = dp(n, k, day+1, money*2)
//     if k != 0:
//         withdraw = 2*money + dp(n, k-1, day+1, 1)
//     else:
//         withdraw = 0
//     return max(wait, withdraw)

// if __name__ == "__main__":
//     result = main()
//     print(" ".join(map(str, result)))

#include <bits/stdc++.h>
using namespace std;

int dp(int n, int k, int day, int money) {
  if (n == day)
    return 0;
  if (n - day == k)
    return 2 * money + dp(n, k - 1, day + 1, 1);
  int wait, withdraw;
  wait = dp(n, k, day + 1, money * 2);
  if (k != 0)
    withdraw = 2 * money + dp(n, k - 1, day + 1, 1);
  else
    withdraw = 0;

  return max(wait, withdraw);
}

int main() {
  int t, n, k;
  int result;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n >> k;
    result = dp(n, k, 0, 1);
    cout << result << '\n';
  }
}
