#include <bits/stdc++.h>

using namespace std;
int main() {
    int x;
    int y;
    cin >> x >> y;
    if (y%x != 0) {
        if (y/x ==0) {
            cout << 2;
        } else {
            cout << (y/x)+1;
        }
    } else {
        cout << y/x;
    }
    cout << endl;
}