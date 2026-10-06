#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main() {
  int n, a, b, result = 0;
  unordered_map<int, int> count, openers, self;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    count[a]++;
    openers[b]++;
    if (a == b)
      self[a]++;
  }

  for (auto entry : count) {
    int brand = entry.first;
    if (openers[brand] == 0)
      result += entry.second;
    else if (openers[brand] == 1 && self[brand] == 1)
      result++;
  }

  cout << result;
  return 0;
}
