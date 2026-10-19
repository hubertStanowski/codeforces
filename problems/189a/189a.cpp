#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  const int NEG = -INFINITY;
  vector<int> dp(n + 1, NEG);
  dp[0] = 0;

  for (int val : {a, b, c}) {
    for (int curr = val; curr < n + 1; curr++) {
      dp[curr] = max(dp[curr], dp[curr - val] + 1);
    }
  }

  cout << dp[n];
}