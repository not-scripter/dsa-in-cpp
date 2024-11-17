#include <iostream>
#include <vector>
using namespace std;

int main() {
  int target = 2;
  vector<int> vec = {1, 2, 3, 4};

  for (int val : vec) {
    if (val == target) {
      cout << val << endl;
    }
  }

  return 0;
}
