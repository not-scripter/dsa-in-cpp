#include <iostream>
#include <string>
#include <vector>
using namespace std;

void compressString(vector<string> chars, int n) {
  int i = 0;

  for (; i < n;) {
    string ch = chars[i];
    int count = 0;

    while (i < n && chars[i] == ch) {
      count++;
      i++;
    }

    if (count > 1) {
      chars[i] = ch;
      string str = to_string(count);

      for (char digit : str) {
        chars[i++] = digit;
      }
    }
  }
  chars.resize(i);

  for (string str : chars) {
    cout << str;
  }
  cout << endl;
}

int main() {
  vector<string> chars = {"a", "a", "b", "c", "c", "c"};

  compressString(chars, chars.size());

  return 0;
}
