#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  double p = (double)a / b;
  double q = (double)c / d;
  double r = (1 - p) * (1 - q);
  double result = p / (1 - r);

  cout << fixed << setprecision(12) << result;
  return 0;
}
