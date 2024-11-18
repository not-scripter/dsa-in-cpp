#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> nums) {
  int st = 0, end = nums.size() - 1;

  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (mid == 0 && nums[0] != nums[1])
      return nums[0];
    if (mid == nums.size() && nums[nums.size() - 2] != nums[nums.size() - 1])
      return nums[nums.size() - 1];

    if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
      return nums[mid];

    if (mid % 2 == 0) { // odd
      if (nums[mid] == nums[mid - 1])
        end = mid - 1;
      else
        st = mid + 1;
    } else { // even
      if (nums[mid] == nums[mid - 1])
        st = mid + 1;
      else
        end = mid - 1;
    }
  }

  return -1;
}

int main() {
  vector<int> nums = {2, 2, 3, 4, 4, 5, 5};

  cout << find(nums) << endl;

  return 0;
}
