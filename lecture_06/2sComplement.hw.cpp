#include <iostream>
using namespace std;

int decToBin(int n) {
  int ans = 0, power = 1;

  for (int i = 0; n > 0; i++) {
    int rem = n % 2;
    n = n / 2;
    ans += (rem * power);
    power *= 10;
  }

  return ans;
}

int twosComplement(int n) {
  int ans;
  int bin = decToBin(n);
  string stAns = "0" + to_string(bin);

  for (int i = 0; bin > 0; i++) {
  }

  return ans;
}

int main() {
  int n; // 37, 41, 19

  cout << "enter decimle number to convert to binary: ";
  cin >> n;

  cout << twosComplement(n) << endl;

  return 0;
}
