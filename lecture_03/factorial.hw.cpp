#include <iostream>
using namespace std;

int main() {
  int n = 4;
  int fa = 1;

  for (int i = 0; i < n; i++) {
    fa *= (i + 1);
  }

  cout << fa << endl;

  return 0;
}
