#include <iostream>
#include <vector>
using namespace std;

void reverseVec(vector<int> vec) {
  int st = 0, end = vec.size() - 1;

  for (int val : vec) {
    if (st > end) {
      break;
    }
    swap(vec.at(st), vec.at(end));
    st++;
    end--;
  }

  for (int val : vec) {
    cout << val << " ";
  }
  cout << endl;
}

int main() {
  vector<int> vec = {1, 2, 3, 4};

  reverseVec(vec);

  return 0;
}
