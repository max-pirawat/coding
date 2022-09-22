#include <bits/stdc++.h>

using namespace std;

int check(string answer, string pattern) {
  int points = 0;
  
  for (int i=0; i < answer.size(); i++) {
    if (answer[i] == pattern[i%pattern.size()]) {
      points++;
    }
  }
  return points;
}

int main() {
  int n;
  string answer = "";
  cin >> n >> answer;
  int A = check(answer,"ABC");
  int B = check(answer,"BABC");
  int G = check(answer,"CCAABB");
  int most = max(max(A,B), G);
  
  cout << most << "\n";
  if (most == A) {
    cout << "Adrian" << "\n";
  }
  if (most == B) {
    cout << "Bruno" << "\n";
  }
  if (most == G) {
    cout << "Goran" << "\n";
  }
}