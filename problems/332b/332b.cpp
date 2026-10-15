#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;

int main() {
  int n, k;
  cin >> n >> k;
  vi x(n);
  for (auto &xi : x) {
    cin >> xi;
  }

  vector<long long> prefix = {0};
  for (int ch : x) {
    prefix.push_back(prefix.back() + ch);
  }

  vector<long long> w(n - k + 2);
  for (int i = 1; i < n - k + 2; i++) {
    w[i] = prefix[i + k - 1] - prefix[i - 1];
  }
  long long bestB = n - k + 1, bestBSum = w[bestB];
  long long ansA = 1, ansB = bestB, bestTotal = -1;

  for (int a = n - 2 * k + 1; a >= 1; a--) {
    long long curr = w[a] + bestBSum;
    if (curr >= bestTotal) {
      bestTotal = curr;
      ansA = a;
      ansB = bestB;
    }
    if (a > 1) {
      int b = a + k - 1;
      if (w[b] >= bestBSum) {
        bestBSum = w[b];
        bestB = b;
      }
    }
  }

  cout << ansA << " " << ansB << "\n";
}
