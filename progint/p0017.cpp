#include <bits/stdc++.h>

using namespace std;
int main() {
  int p[4];
  cin >> p[0] >> p[1] >> p[2] >> p[3];
  sort(p, p+4);
  cout << p[0]*p[2] << "\n";
}