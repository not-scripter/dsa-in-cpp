#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {2, 5, 8, 9};
  int target = 7;

  int i = 0, j = vec.size() - 1;

  while (i < j) {
    int sum = vec.at(i) + vec.at(i);
    if (sum > target)
      j--;
    else if (sum < target)
      i++;
    else
      cout << vec.at(i) << " " << vec.at(j) << endl;
  }

  return 0;
}
