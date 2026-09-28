#include <bits/stdc++.h>
using namespace std;

bool valid(int i, int j, int n) { return 0 <= i && i < n && 0 <= j && j < n; }
void toggle(int i, int j, vector<vector<int>> &result) {
  result[i][j] = abs(result[i][j] - 1);
}

int main() {
  const int dirs[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
  int n = 3;
  int val;
  vector<vector<int>> result(n, vector(n, 1));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> val;
      if (val % 2 == 1)
        toggle(i, j, result);
      for (auto dir : dirs) {
        int ni = i + dir[0];
        int nj = j + dir[1];
        if (valid(ni, nj, n) && val % 2 == 1) {
          toggle(ni, nj, result);
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << result[i][j];
    }
    cout << "\n";
  }
}
