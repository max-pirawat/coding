#include <bits/stdc++.h>
int h[10001];
using namespace std;
int main() {
    int n=0;
    cin >> n;
    int m = 0;
    for (int i=0; i<n; i++) {
        int t=0;
        cin >> t;
        h[t]++;
        if (h[t] > h[m]) {
            m = t;
        }
    }
    bool first = true;
    for (int i=1; i<10001; i++) {
        if (h[m] == h[i]) {
            if (!first) {
                cout << " ";
                
            } else {
                first = false;
            }
            cout << i;
        }
    }
    cout << endl;
   
}