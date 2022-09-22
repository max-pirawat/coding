#include <bits/stdc++.h>

using namespace std;

int halfjello(int a,int b,int c, int d) {
    if (a==1 && b==1 & c==1) {
        return d;
    }
    int m = max(a,max(b,c));
    if (m == a) {
        return halfjello(a/2,b,c,d+1);
    } else if (m == b) {
        return halfjello(a,b/2,c,d+1);
    } else if (m == c) {
        return halfjello(a,b,c/2,d+1);
    }
}
int main() {
  int a;
  int b;
  int c;
  cin >> a >> b >> c;
  cout << halfjello(a,b,c,0) << endl;
}