#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> nums, int N) {

  for (int i = 0; i < N - 1; i++) {
    int smallestIndex = nums[0];

    for (int j = i + 1; j < N; j++) {
      if (nums[j] < nums[smallestIndex])
        smallestIndex = j;
    }
    swap(nums[i], nums[smallestIndex]);
  }

  for (int i = 0; i < N; i++) {
    cout << nums[i] << endl;
  }
}

int main() {
  vector<int> nums = {1, 3, 2, 5, 4};

  selectionSort(nums, nums.size());

  return 0;
}
