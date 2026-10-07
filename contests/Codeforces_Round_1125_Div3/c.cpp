#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

void solve(int n, vi a) {
  // A later triad at i shares a key only with starts i-2 and i-4.
  long long result = 0;
  unordered_map<int, int> counts;
  vi triads(n - 4);

  for (int i = 0; i < n - 4; i++) {
    triads[i] = a[i] + a[i + 2] - a[i + 4];
  }

  for (int i = 0; i < n - 4; i++) {
    result += counts[triads[i]];
    if (i >= 2 && triads[i - 2] == triads[i])
      result--;
    if (i >= 4 && triads[i - 4] == triads[i])
      result--;
    counts[triads[i]]++;
  }

  cout << result << '\n';
}

int main() {
  int t, n, temp;
  vi a;

  cin >> t;
  for (int tc = 0; tc < t; tc++) {
    cin >> n;
    vi a;
    for (int i = 0; i < n; i++) {
      cin >> temp;
      a.push_back(temp);
    }
    solve(n, a);
  }
}
