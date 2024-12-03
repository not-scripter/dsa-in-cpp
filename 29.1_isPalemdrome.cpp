#include <cctype>
#include <iostream>
using namespace std;

bool isAlphaNum(char ch) {
  int lch = tolower(ch);
  if ((lch >= '0' && lch <= '9') || (lch >= 'a' && lch <= 'z'))
    return true;
  return false;
}

bool isPalendome(string str) {
  int i = 0, j = str.length() - 1;

  while (i < j) {
    if (!isAlphaNum(str[i]))
      i++;
    if (!isAlphaNum(str[j]))
      j--;

    if (tolower(str[i]) != tolower(str[j]))
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
