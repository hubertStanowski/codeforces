#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  list<int> result;
  auto it = result.begin();
  for (int i = 0; i < n; i++) {
    it = result.insert(it, i + 1);
    if (s[i] == 'r')
      it++;
  }
  for (int x : result) {
    cout << x << '\n';
  }
}
