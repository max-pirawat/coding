#include <bits/stdc++.h>

using namespace std;
int main() {
  string s;
  getline(cin,s);
  for (int i=0; i < s.size(); i++) {
    char c = s[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        i = i + 2;
    }
    cout << c;
  }
  cout << endl;
}