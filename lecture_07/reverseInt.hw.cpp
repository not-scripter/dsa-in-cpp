#include <iostream>
using namespace std;

int reverseInt(int n) {
  int ans = 0;

  for (int i = 0; n > 0; i++) {
    ans = (ans * 10) + (n % 10);
    n /= 10;
  }

  return ans;
}

int main() {
  int n = 456;

  cout << reverseInt(n) << endl;

  return 0;
}
