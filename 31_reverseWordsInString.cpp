#include <iostream>
using namespace std;

string reverseWords(string s, int n) {
  string ans = "";

  reverse(s.begin(), s.end());

  for (int i = 0; i < n; i++) {
    string word = "";

    while (i < n && s[i] != ' ') {
      // word.push_back(s[i]);
      // word += s[i];
      word = s[i] + word; // avoided 2nd reverse
      i++;
    }

    // reverse(word.begin(), word.end());

    if (word.length() > 0)
      ans += " " + word;
  }

  return ans.substr(1);
}

int main() {
  string s = "namaste world";

  cout << reverseWords(s, s.length()) << endl;

  return 0;
}
