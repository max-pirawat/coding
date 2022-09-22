#include <bits/stdc++.h>

using namespace std;
int main() {
  int x;
  int y;
  int z;
  int B;
  string order;
  cin >> x >> y >> z >> order;
  int A = 200;
  int C = -200;
  if (x > C) {
    C = x;
  } 
  if (x < A) {
    A = x;
  }
  if (y > C) {
    C = y;
  } 
  if (y < A) {
    A = y;
  }
  if (z > C) {
    C = z;
  }
  if (z < A) {
    A = z;
  }
  if (x != A && x != C) {
    B = x;
  }
  if (y != A && y != C) {
    B = y;
  }
  if (z != A && z != C) {
    B = z;
  }
  if (order[0] == 'A') {
    cout << A << " ";
  } else if (order[0] == 'B') {
    cout << B << " ";
  } else {
    cout << C << " ";
  }
  if (order[1] == 'A') {
    cout << A << " ";
  } else if (order[1] == 'B') {
    cout << B << " ";
  } else {
    cout << C << " ";
  }
  if (order[2] == 'A') {
    cout << A;
  } else if (order[2] == 'B') {
    cout << B;
  } else {
    cout << C;
  }
}