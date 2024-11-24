#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> nums, int N) {
  // bool isSwapped = false;

  for (int i = 0; i <= N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      if (nums[j] < nums[i]) {
        // isSwapped = true;
        swap(nums[j], nums[i]);
      }
    }
    // if (!isSwapped)
    //   return;
  }

  for (int i = 0; i < N; i++) {
    cout << nums[i];
  }
  cout << endl;
}

void bubbleSortDec(vector<int> nums, int N) {
  // bool isSwapped = false;

  for (int i = 0; i <= N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      if (nums[j] > nums[i]) {
        // isSwapped = true;
        swap(nums[j], nums[i]);
      }
    }
    // if (!isSwapped)
    //   return;
  }

  for (int i = 0; i < N; i++) {
    cout << nums[i];
  }
  cout << endl;
}

int main() {
  vector<int> nums = {1, 3, 2, 5, 4};

  bubbleSort(nums, nums.size());

  return 0;
}
