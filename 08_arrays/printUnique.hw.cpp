#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {
  int ans = 0;

  for (int i = 0; i < size; i++) {
    ans ^= arr[i];
  }
  cout << ans << endl;
}

int main() {
  int size = 5;
  int arr[] = {6, 2, 2, 3, 3};

  printUnique(arr, size);

  return 0;
}
