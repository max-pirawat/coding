#include <bits/stdc++.h>

using namespace std;
int persons() {
    int points = 0;
    for (int i=0; i<4; i++) {
        int temp = 0;
        cin >> temp;
        points = points + temp;
    }
    return points;
}
int main() {
    int m = -10000;
    int n = 0;
    for (int i=0; i < 5; i++) {
        int p = persons();
        if (p > m) {
            m = p;
            n = i;
        }
    }
    cout << n+1 << " " << m << endl;
}