#include <bits/stdc++.h>

using namespace std;
int main() {
  int A;
  int B;
  int C;
  cin >> A >> B >> C;
  for (int a=1; a<= A; a++) {

    if (A%a == 0) {
        int c = A/a;
        for (int b=-abs(C); b<= abs(C); b++) {
            if ((b!=0) && (C%b == 0)) {
                int d = C/b;
                if (B == a*d+b*c) {
                    cout << a << " " << b << " " << c << " " << d << endl;
                    return 0;
                }
            }
            
        }
    }
  }
  cout << "No Solution" << endl;
}