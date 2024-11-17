#include <iostream>

using namespace std;

int main() {
  int mode;
  double valueOne, valueTwo, result;

  cout << "enter your first number: ";
  cin >> valueOne;
  cout << "enter your second number: ";
  cin >> valueTwo;

  cout << "1-Sum, 2-Minus, 3-Multiply, 4-Devide, 5-Modulo what to perform: ";
  cout << "choose what to perform: ";
  cin >> mode;

  if (mode == 1) {
    result = valueOne + valueTwo;
  } else if (mode == 2) {
    result = valueOne - valueTwo;
  } else if (mode == 3) {
    result = valueOne * valueTwo;
  } else if (mode == 4) {
    result = valueOne / valueTwo;
  } else if (mode == 5) {
    /* result = valueOne % valueTwo; */
  }

  cout << "the result is : " << result << endl;

  return 0;
}
