#include <bits/stdc++.h>

using namespace std;

void line1(int n) {
  cout << ".";
  for (int i=0; i<n;i++) {
    if (i%3 == 2) {
      cout << ".*..";
    } else {
      cout << ".#..";
    }
  }
  cout << "\n";
}
void line2(int n) {
  cout << ".";
  for (int i=0; i<n;i++) {
    if (i%3 == 2) {
      cout << "*.*.";
    } else {
      cout << "#.#.";
    }
  }
  cout << "\n";
}
void line3(int n, string word) {
  string out = "#";
  for (int i=0; i<n;i++) {
    if (i%3 == 2) {
      out.pop_back();
      out = out + "*." + word[i] + ".*";
    } else {
      out = out + "." + word[i] + ".#";
    }
  }
  cout << out << "\n";
}
int main() {
  
  string word = "";
  cin >> word;
  int n =word.size();
  line1(n);
  line2(n);
  line3(n,word);
  line2(n);
  line1(n);
}