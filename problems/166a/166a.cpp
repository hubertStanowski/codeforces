#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

bool compScores(ii a, ii b) {
  if (a.first > b.first) {
    return true;
  } else if (a.first == b.first && a.second < b.second) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int n, k;
  cin >> n >> k;

  vector<ii> p(n);
  for (auto &pi : p) {
    cin >> pi.first >> pi.second;
  }

  sort(p.begin(), p.end(), compScores);
  int left = 0, right = n - 1, mid;
  while (left < right) {
    mid = left + (right - left) / 2;
    if (compScores(p[mid], p[k - 1])) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }

  int result = 0;
  for (int i = left; i < n && p[i] == p[k - 1]; i++) {
    result++;
  }

  cout << result;
}