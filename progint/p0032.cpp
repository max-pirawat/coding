#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int x[n];  
    for (int i =0; i<n; i++) {
        cin >> x[i];
    }
    // for (int i=0; i <n; i++) {
    //     int l = i;
    //     for (int j=i+1; j<n; j++) {
    //         if (x[l] > x[j]) {
    //             l = j;
    //         }
    //     }
    //     swap(x[i], x[l]);
    // }
    sort(&x[0], &x[n]);
    if (x[0] == 0) {
        for (int i =0; i<n; i++) {
             if (x[i] != 0) {
                swap(x[0],x[i]);
                break;
             }
        }
        
    }
    for (int i =0; i<n; i++) {
        cout << x[i];
    }
    cout << endl;

}
    
    
