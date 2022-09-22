#include <bits/stdc++.h>

using namespace std;
int main() {
  int l;
  cin >> l;
  int w = l;
  if (l%2 == 0) {
    w--;
  }
  for (int r=0; r<(l+1)/2; r++) {
    for (int c=0; c<w; c++) {
        int d = (w-1)/2;
        if ((c == d+r) || (c == d-r)) {
            cout << "*";
        } else {
            cout << "-";
        }
    }
    cout << endl;
  }
  for (int r=l/2-1; r>= 0; r--) {
    for (int c=0; c<w; c++) {
        int d = (w-1)/2;
        if ((c == d+r) || (c == d-r)) {
            cout << "*";
        } else {
            cout << "-";
        }
    }
    cout << endl;
  }
}