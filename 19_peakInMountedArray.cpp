#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> nums) {
  int st = 0, end = nums.size() - 1;

  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (nums.at(mid) > nums.at(mid - 1) && nums.at(mid) > nums.at(mid + 1))
      return mid;
    else if (nums.at(mid) > nums.at(mid - 1))
      st = mid + 1;
    else
      end = mid - 1;
  }

  return -1;
}

int main() {
  vector<int> nums = {0, 2, 4, 8, 7, 6, 5};

  cout << find(nums) << endl;

  return 0;
}
