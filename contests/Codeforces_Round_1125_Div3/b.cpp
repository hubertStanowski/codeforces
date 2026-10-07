#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

void solve(int n, string s) {
  stack<int> memory;
  unordered_set<int> printed;

  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      memory.push(i);
    } else if (s[i] == '2') {
      if (!memory.empty()) {
        printed.insert(memory.top());
        memory.pop();
      } else {
        printed.insert(i);
      }
    } else {
      printed.insert(i);
    }
  }
  int k = n - printed.size();
  cout << k << "\n";
  for (int i = 0; i < n; i++) {
    if (printed.count(i) == 0)
      cout << i + 1 << " ";
  }
  cout << "\n";
}

int main() {
  int t, n;
  string s;

  cin >> t;
  for (int tc = 0; tc < t; tc++) {
    cin >> n >> s;
    solve(n, s);
  }
}