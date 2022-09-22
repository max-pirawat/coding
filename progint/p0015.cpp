#include <bits/stdc++.h>

using namespace std;
int main() {
  int k1;
  int k2;
  int k3;
  cin >> k1 >> k2 >> k3;
  cout << max(k3 - k2 - 1, k2 - k1 - 1) << "\n";
}