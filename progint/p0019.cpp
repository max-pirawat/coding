#include <bits/stdc++.h>

using namespace std;
int N;
int SS[10];
int BB[10];
int recurse(int p, int sour, int bitter, int chosen) {
    if(p==N) {
        if(chosen != 0) {
            return abs(sour-bitter);
        } else {
            return 2000000000;
        }
            
    } else {
       return min(recurse(p+1,SS[p]*sour,BB[p]+bitter, chosen+1),recurse(p+1,sour,bitter, chosen));
    }
}
int main() {
    cin >> N;
    for (int i=0;i<N;i++) {
        cin >> SS[i] >> BB[i];
    }
    cout << recurse(0,1,0,0) << endl;
}