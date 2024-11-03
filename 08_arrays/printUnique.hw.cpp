#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i != j && arr[i] == arr[j]) {
        break;
      }
      cout << "unique : " << arr[i] << endl;
    }
  }
}

int main() {
  int size = 5;
  int arr[] = {4, 2, 1, 2, 3};

  printUnique(arr, size);

  return 0;
}
