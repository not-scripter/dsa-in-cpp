#include <iostream>
#include <vector>
using namespace std;

void dutchSort(vector<int> nums) {
  int low = 0, mid = 0, high = nums.size() - 1;

  while (mid <= high) {
    if (nums[mid] == 0) {
      swap(nums[low], nums[mid]);
      low++;
      mid++;
    } else if (nums[mid] == 1) {
      mid++;
    } else {
      swap(nums[mid], nums[high]);
      high--;
    }
  }

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i];
  }
  cout << endl;
}

int main() {
  vector<int> nums = {1, 0, 2, 0, 1, 0, 2, 1, 2};

  dutchSort(nums);

  return 0;
}
