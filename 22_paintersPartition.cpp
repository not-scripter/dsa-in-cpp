#include <iostream>
#include <vector>
using namespace std;

bool isPos(vector<int> nums, int N, int M, int maxTime) {
  int painters = 1, time = 0;

  for (int i = 0; i < N; i++) {
    if (time + nums.at(i) < maxTime)
      time += nums.at(i);
    else {
      painters++;
      time = nums.at(i);
    }
  }

  if (painters > M)
    return false;
  return true;
}

int find(vector<int> nums, int N, int M) {
  int st = 0, end = 0, ans = -1;
  for (int i = 0; i < N; i++) {
    end += nums.at(i);
    st = max(st, nums.at(i));
  }

  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (isPos(nums, N, M, mid)) {
      ans = mid;
      end = mid - 1;
    } else
      st = mid + 1;
  }

  return ans;
}

int main() {
  vector<int> nums = {40, 30, 10, 20};
  int N = 4, M = 2;

  cout << find(nums, N, M) << endl;

  return 0;
}
