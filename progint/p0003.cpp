#include <iostream>
using namespace std;
int main() {
  int m;
  int n;
  int A[100][100];
  cin >> m  >> n;
  for (int i=0;i<m; i++) {
    for (int j=0;j<n; j++) {
      cin >> A[i][j];
    }
  }
  int B[100][100];
  for (int i=0;i<m; i++) {
    for (int j=0;j<n; j++) {
      cin >> B[i][j];
    }
  }
  for (int i=0;i<m; i++) {
    for (int j=0;j<n; j++) {
      cout << A[i][j]+B[i][j] << " ";
    }
    cout << "\n";
  }
}