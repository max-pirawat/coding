#include <bits/stdc++.h>

using namespace std;

bool xd[1001];

int main() {
  int N;
  int K;
  cin >> N >> K;
  for (int i=2; i<=N; i++) {
    if (!xd[i]) {
      for (int j=i; j<=N; j+=i) {
        if (!xd[j]) {
          K--;
          if(K == 0) {
            cout << j << endl;
            return 0;
          }
          xd[j] = true;
        }
        
      }
    }
    
  }
}