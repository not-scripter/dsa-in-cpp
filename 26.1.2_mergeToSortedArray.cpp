#include <iostream>
#include <vector>
using namespace std;

void mergeToSorted(vector<int> A, vector<int> B, int M, int N) {
  int index = M + N - 1, i = M - 1, j = N - 1;

  while (i >= 0 && j >= 0) {
    if (A[i] > B[j]) {
      A[index] = A[i];
      i--;
    } else {
      A[index] = B[j];
      j--;
    }
    index--;
  }

  while (j >= 0) {
    A[index] = B[j];
    j--;
    index--;
  }

  for (int i = 0; i < A.size(); i++) {
    cout << A[i];
  }
  cout << endl;
}

int main() {
  vector<int> A = {4, 5, 6, 0, 0, 0};
  vector<int> B = {1, 2, 3};
  int M = 3, N = 3;

  mergeToSorted(A, B, M, N);

  return 0;
}
