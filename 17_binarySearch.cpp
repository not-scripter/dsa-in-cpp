#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> nums, int tar) {
  int st = 0, end = nums.size() - 1;

  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (nums[mid] == tar)
      return mid;
    else if (nums[mid] > tar) {
      end = mid - 1;
    } else {
      st = mid + 1;
    }
  }

  return -1;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  int tar = 3;

  cout << find(nums, tar) << endl;

  return 0;
}
