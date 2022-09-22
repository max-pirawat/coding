#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cin >> a;
  cin >> b;
  cin >> c;
  int s = a+b+c;
  if (s>=80 && s<=100) {
    cout << "A" << "\n";
  }
  if (s>=75 && s<=79) {
    cout << "B+" << "\n";
  }
  if (s>=70 && s<=74) {
    cout << "B" << "\n";
  }
  if (s>=65 && s<=69) {
    cout << "C+" << "\n";
  }
  if (s>=60 && s<=64) {
    cout << "C" << "\n";
  }
  if (s>=55 && s<=59) {
    cout << "D+" << "\n";
  }
  if (s>=50 && s<=54) {
    cout << "D" << "\n";
  }
  if (s>=0 && s<=49) {
    cout << "F" << "\n";
  }
}