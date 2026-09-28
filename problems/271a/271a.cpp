#include <bits/stdc++.h>
using namespace std;

bool valid(int year);

int main() {
  int year;
  cin >> year;
  year++;

  while (!valid(year)) {
    year++;
  }
  cout << year;
}

bool valid(int year) {
  int curr;
  unordered_set<int> seen;
  while (year > 0) {
    curr = year % 10;
    if (seen.contains(curr))
      return false;
    seen.insert(curr);
    year /= 10;
  }
  return true;
}