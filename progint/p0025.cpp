#include <bits/stdc++.h>

using namespace std;
void printing(int a, int b) {
    cout << a;
    for (int i=0; i<b; i++) {
        cout << "0";
    }
}
int main() {
    string a;
    string b;
    string op;
    cin >> a >> op >> b;
    int ao=a.size()-1;
    int bo=b.size()-1;
    if (op=="*") {
        printing(1,ao+bo);
    } else if (op=="+") {
        if(ao==bo) {
            printing(2,ao);

        } else {
            if (ao<bo) {
                swap(ao,bo);
            }
            printing(1,ao-bo-1);
            printing(1,bo);
        }
    }
    cout << endl;
}