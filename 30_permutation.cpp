#include <iostream>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]) {
  for (int i = 0; i < 26; i++) {
    if (freq1[i] != freq2[i])
      return false;
  }
  return true;
}

bool isPermutaionExist(string s1, string s2) {
  int freq[26] = {0};
  for (int i = 0; i < s1.length(); i++) {
    freq[s1[i - 'a']]++;
  }

  int windowSize = s2.length(), windowFreq[26] = {0};
  for (int i = 0; i < s2.length(); i++) {
    cout << windowFreq[s2[i - 'a']] << endl;
    windowFreq[s2[i - 'a']]++;
  }

  if (isFreqSame(freq, windowFreq))
    return true;

  return false;
}

int main() {
  string s1 = "ab", s2 = "bcadfghabkjg";

  if (isPermutaionExist(s1, s2))
    cout << "Permutation exist";
  else
    cout << "Permutaion doesn't exist";

  cout << endl;

  return 0;
}
