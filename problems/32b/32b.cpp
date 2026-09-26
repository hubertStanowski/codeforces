#include <bits/stdc++.h>
using namespace std;

int main() {
  string code;
  int n;
  cin >> code;
  n = code.size();

  for (int i = 0; i < n; i++) {
    if (code[i] == '.')
      cout << 0;
    else {
      // we don't need to check i+1 < n as we know input is valid,
      // so can only contain . or -. or --
      if (code[i + 1] == '.')
        cout << 1;
      else
        cout << 2;
      // we want to skip next step
      i++;
    }
  }

  return 0;
}