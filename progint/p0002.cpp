#include <iostream>
using namespace std;
int main() {
  int count;
  cin >> count;
  int max = -2000000000;
  int min = 2000000000;
  for (int i = 1; i <= count; i++) {
    int num;
    cin >> num;
    if (num > max) {
      max = num;
    } else if (num < min) {
      min = num;
    }
  }
  cout << min << "\n" << max << "\n";
}