#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> nums, int N, int M, int maxPages) {
  int student = 1, pages = 0;

  for (int i = 0; i < N; i++) {
    if (nums.at(i) > maxPages)
      return false;
    if (pages + nums.at(i) < maxPages)
      pages += nums.at(i);
    else {
      student++;
      pages = nums.at(i);
    }
  }

  if (student > M)
    return false;
  return true;
}

int find(vector<int> nums, int N, int M) {
  int st = 0, end = 0, ans = -1;
  for (int i = 0; i < N; i++) {
    end += nums.at(i);
  }

  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (isValid(nums, N, M, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      st = mid + 1;
    }
  }

  return ans;
}

int main() {
  vector<int> nums = {15, 17, 20};
  int N = 3, M = 2;

  cout << find(nums, N, M) << endl;

  return 0;
}
