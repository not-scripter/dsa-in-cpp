#include <iostream>
using namespace std;

bool isPalendome(string str) {
  int i = 0, j = str.length() - 1;

  while (i < j) {
    if (str[i] != str[j])
      return false;

    i++;
    j--;
  }

  return true;
}

int main() {
  string str;

  cout << "enter a string : ";
  cin >> str;

  if (isPalendome(str))
    cout << "this is a palendrome";
  else
    cout << "this is not a palendrome";

  cout << endl;

  return 0;
}
