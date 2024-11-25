#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> nums, int N) {
  for (int i = 1; i < N; i++) {
    int current = nums[i], prevIndex = i - 1;
    while (prevIndex > 0 && nums[prevIndex] > current) {
      nums[prevIndex + 1] = nums[prevIndex];
      prevIndex--;
    }
    nums[prevIndex + 1] = current;
  }

  for (int i = 0; i < N; i++) {
    cout << nums[i];
  }
  cout << endl;
}

void selectionSortDec(vector<int> nums, int N) {
  for (int i = 1; i < N; i++) {
    int current = nums[i], prevIndex = i - 1;
    while (prevIndex >= 0 && nums[prevIndex] < current) {
      nums[prevIndex + 1] = nums[prevIndex];
      prevIndex--;
    }
    nums[prevIndex + 1] = current;
  }

  for (int i = 0; i < N; i++) {
    cout << nums[i];
  }
  cout << endl;
}

int main() {
  vector<int> nums = {1, 3, 2, 5, 4};

  selectionSort(nums, nums.size());
  selectionSortDec(nums, nums.size());

  return 0;
}
