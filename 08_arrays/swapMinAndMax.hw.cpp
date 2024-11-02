#include <iostream>
using namespace std;

void swapMinAndMax(int arr[], int size) {
  int smallest = INT_MAX, largest = INT_MIN;

  for (int i = 0; i < size; i++) {
    smallest = min(arr[i], smallest);
    largest = max(arr[i], largest);
  }
  swap(smallest, largest);

  cout << arr[0] << arr[2] << endl;
}

int main() {
  int size = 3;
  int arr[] = {1, 2, 3};

  swapMinAndMax(arr, size);

  return 0;
}
