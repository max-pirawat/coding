#include <bits/stdc++.h>

using namespace std;
int main() {
  int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  string day[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
    int d;
    int m;
    cin >> d >> m;
    int x = 0;
    for (int i=0; i < m-1;i++){
        x = x + month[i];
    } 
    x += d-1;
    cout << day[x%7] << endl;
}