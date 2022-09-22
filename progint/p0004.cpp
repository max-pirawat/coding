#include <iostream>
#include <cstring>
#include <ctype.h>


using namespace std;
int main() {
  int up =0;
string message = "";
  cin >> message;
  for (int i = 0; i< message.size();i++){
    char c = message[i];
    if (isupper(c)) {
      up++;
    }
  }
  if (up == 0) {
    cout << "All Small Letter" << "\n";
  } else if (up == message.size()) {
    cout << "All Capital Letter" << "\n";
  } else {
    cout << "Mix" << "\n";
  }
}