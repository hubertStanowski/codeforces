#include <bits/stdc++.h>
using namespace std;

bool is_lucky(int number);

int main() {
  long long number;
  int curr;
  cin >> number;
  int lucky_count = 0;

  while (number > 0) {
    curr = number % 10;
    if (curr == 4 or curr == 7)
      lucky_count++;
    number /= 10;
  }

  if (is_lucky(lucky_count)) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}

bool is_lucky(int number) {
  if (number == 0)
    return false;
  int curr;
  while (number > 0) {
    curr = number % 10;
    if (curr != 4 and curr != 7)
      return false;
    number /= 10;
  }
  return true;
}