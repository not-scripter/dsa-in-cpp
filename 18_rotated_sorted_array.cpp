#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> nums, int tar) {
  int st = 0, end = nums.size() - 1;

  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (nums[mid] == tar)
      return mid;
    else if (nums[mid] > st) {
      if (nums[st] < tar && nums[mid] > tar)
        end = mid - 1;
      else
        st = mid + 1;
    } else {
      if (nums[mid] < tar && nums[end] > tar)
        st = mid + 1;
      else
        end = mid - 1;
    }
  }

  return -1;
}

int main() {
  vector<int> nums = {4, 5, 6, 0, 1, 2, 3};
  int tar = 0;

  cout << find(nums, tar) << endl;

  return 0;
}
