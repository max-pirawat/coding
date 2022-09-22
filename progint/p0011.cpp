#include <bits/stdc++.h>

using namespace std;
bool a[42];
int main() {
  int s =0;
  int c =0;
  
  for (int i=0;i<10;i++) {
    cin >> s;
    int z = s%42;
    if (a[z]) {
      continue;
    }else {
      a[z] = true;
      c++;
    }
  }
  cout << c << "\n";
}