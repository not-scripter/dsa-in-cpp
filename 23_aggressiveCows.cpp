#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> nums, int N, int C, int minDistance) {
  int cows = 1, lastStall = nums.at(0);

  for (int i = 1; i < N; i++) {
    if (nums.at(i) - lastStall >= minDistance) {
      cows++;
      lastStall = nums.at(i);
    }

    if (cows == C)
      return true;
  }
  return false;
}

int find(vector<int> nums, int N, int C) {
  int st = 1, end = nums.at(N - 1) - nums.at(0), ans = -1;

  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (isPossible(nums, N, C, mid)) {
      ans = mid;
      st = mid + 1;
    } else
      end = mid - 1;
  }

  return ans;
}

int main() {
  vector<int> nums = {1, 2, 8, 4, 9};
  int N = 5, C = 3;

  sort(nums.begin(), nums.end());

  cout << find(nums, N, C) << endl;

  return 0;
}
