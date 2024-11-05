#include <iostream>
#include <vector>
using namespace std;

int getMej(vector<int> vec) {
  int ans = 0, freq = 0;
  for (int i = 0; i < vec.size(); i++) {
    if (freq == 0)
      ans = vec.at(i);
    else if (ans == vec.at(i))
      freq++;
    else
      freq--;
  }
  if (freq > vec.size() / 2) {
    return ans;
  } else
    return -1;
}

int main() {
  vector<int> vec = {2, 2, 1, 1, 1, 1};

  cout << getMej(vec) << endl;

  return 0;
}
