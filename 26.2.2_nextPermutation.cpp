#include <iostream>
#include <vector>
using namespace std;

void nextPermutation(vector<int> nums) {
  int pivet = -1;

  for (int i = nums.size() - 2; i >= 0; i--) {
    if (nums[i] < nums[i + 1]) {
      pivet = i;
      break;
    }
  }
  if (pivet == -1) {
    reverse(nums.begin(), nums.end());
  }

  for (int i = nums.size() - 1; i > pivet; i--) {
    if (nums[i] > nums[pivet]) {
      cout << nums[i] << endl;
      swap(nums[i], nums[pivet]);
      break;
    }
  }

  int i = pivet + 1, j = nums.size() - 1;
  while (i <= j) {
    swap(nums[i], nums[j]);
    i++;
    j--;
  }

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i];
  }
  cout << endl;
}

int main() {
  vector<int> nums = {1, 2, 5, 4, 3};

  nextPermutation(nums);

  return 0;
}
