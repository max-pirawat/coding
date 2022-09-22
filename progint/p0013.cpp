#include <bits/stdc++.h>

using namespace std;
int main() {
  int d[9];
  int total = 0;
  for (int i = 0; i < 9; i++) {
    cin >> d[i];
    total = total + d[i];
  }
  int test = total-100;
 
 for (int i = 0;i < 9; i++) {
   for (int j =i+1; j < 9; j++) {
 
     if (test == d[i]+d[j]) {
       for (int k =0; k < 9; k++) {
         if (k != i && k != j) {
           cout << d[k] << "\n";
         }
       }
     }
   }
 }
}