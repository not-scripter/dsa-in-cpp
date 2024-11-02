#include <iostream>
using namespace std;

void sumAndProduct(int arr[], int size) {
  int sum = 0, product = 1;

  for (int i = 0; i < size; i++) {
    sum += arr[i];
    product *= arr[i];
  }

  cout << "sum : " << sum << "\nproduct : " << product << endl;
}

int main() {
  int size = 3;
  int arr[] = {3, 2, 3};

  sumAndProduct(arr, size);

  return 0;
}
