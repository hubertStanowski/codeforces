#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main() {
  int count_25 = 0;
  int count_50 = 0;
  int curr, n;
  bool result = true;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> curr;
    if (curr == 25) {
      count_25++;
    } else if (curr == 50) {
      if (count_25 > 0) {
        count_25--;
        count_50++;
      } else {
        result = false;
        break;
      }
    } else {
      if (count_50 > 0 && count_25 > 0) {
        count_50--;
        count_25--;
      } else if (count_25 >= 3) {
        count_25 -= 3;
      } else {
        result = false;
        break;
      }
    }
  }

  if (result) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}