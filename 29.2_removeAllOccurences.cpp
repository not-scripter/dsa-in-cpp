#include <cctype>
#include <iostream>
using namespace std;

string removeAllOccur(string str, string part) {
  while (str.length() > 0 && str.find(part) < str.length()) {
    str.erase(str.find(part), part.length());
  }

  return str;
}

int main() {
  string str = "aabcbabcdabce", part = "abc";

  cout << removeAllOccur(str, part) << endl;

  return 0;
}
