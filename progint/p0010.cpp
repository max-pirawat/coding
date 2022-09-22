#include <bits/stdc++.h>

using namespace std;
int main() {
  string s = " ";
  int p =1;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A') {
      if (p == 1) {
        p = 2;
      } else if (p == 2) {
        p = 1;
      }
    } else if (s[i] == 'B') {
      if (p == 2) {
        p = 3;
      } else if (p == 3) {
        p = 2;
      }
    } else {
      if (p == 3) {
        p = 1;
      } else if (p == 1) {
        p = 3;
      }
    }
  }
  cout << p << "\n";
}