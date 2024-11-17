#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n = 9;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    for (int j = 0; j < 2 * (n - i) - 3; j++) {
      cout << " ";
    }
    for (int j = 0; j < i + 1; j++) {
      if (j != (n - 1)) {
        cout << "*";
      }
    }
    cout << endl;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < (n - i) - 1; j++) {
      cout << "*";
    }
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << " ";
    }
    for (int j = 0; j < n - i - 1; j++) {
      if (j != (n - 1)) {
        cout << "*";
      }
    }
    cout << endl;
  }

  return 0;
}
