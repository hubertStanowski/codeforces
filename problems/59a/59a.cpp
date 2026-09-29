#include <bits/stdc++.h>
using namespace std;

int main() {
  string word;
  cin >> word;
  int upper_count = 0;
  for (char ch : word) {
    if (isupper(ch))
      upper_count++;
  };
  if (upper_count > (int)word.length() / 2) {
    transform(word.begin(), word.end(), word.begin(), ::toupper);
  } else {
    transform(word.begin(), word.end(), word.begin(), ::tolower);
  }

  cout << word;
}