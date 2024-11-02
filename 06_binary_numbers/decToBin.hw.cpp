#include <iostream>
using namespace std;

int decToBin(int n) {
  int ans = 0, power = 1;

  for (int i = 0; n > 0; i++) {
    int rem = n % 2;
    n = n / 2;
    ans += (rem * power);
    power = power * 10;
  }

  return ans;
}

int main() {
  int n; // 37, 41, 19

  cout << "enter decimle number to convert to binary: ";
  cin >> n;

  cout << decToBin(n) << endl;

  return 0;
}
