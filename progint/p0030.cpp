#include <bits/stdc++.h>

using namespace std;
int main() {
  string num;
  getline(cin, num);
  while (num[0] == '0') {
    num = num.substr(1);
  }
  int all=0;
  for(int i=0; i<num.size(); i++) {
    int a = num[i] - '0';
    all += a; 
  }
  cout << all%3 << " ";
  if (num.size() >= 3) {
    int sum=0;
    for(int i=num.size()-1; i>=0; i-=2) {
        int a = num[i] - '0';
        sum += a; 
    }
    for(int i=num.size()-2; i>=0; i-=2) {
        int a = num[i] - '0';
        sum -= a; 
    }
    cout << ((sum%11)+11)%11 << endl;
  } else {
    cout << (stoi(num))%11 << endl;
  }
  
}