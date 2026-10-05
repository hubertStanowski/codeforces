#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main() {
  int n, price, quality;
  bool alex_correct = false;
  set<ii> laptops;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> price >> quality;
    laptops.insert({price, quality});
  }

  int max_quality = 0;
  for (ii entry : laptops) {
    if (entry.second < max_quality) {
      alex_correct = true;
      break;
    }
    max_quality = entry.second;
  }

  if (alex_correct)
    cout << "Happy Alex";
  else
    cout << "Poor Alex";
}