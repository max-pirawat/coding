#include <bits/stdc++.h>

int GCD(int a, int b) {
  if (b == 0) {
    return a;
  }
  return GCD(b, a % b);
}
using namespace std;
int main() {
  int a;
  int b;
  cin >> a >> b;
  cout << GCD(a, b) << "\n";
}