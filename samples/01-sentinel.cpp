#include <iostream>
using namespace std;

int main() {
  int sentinel = -999, odd = 0 , even = 0, num = 0;

  cout << "Enter a sequnece of numbers:" << endl;
  cout << "(Enter -999 to exit)" << endl;

  while (num != sentinel) {
    cout << ": "; cin >> num;

    if (num == sentinel) {
      break;
    }

    if (num % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  cout << "Number of even numbers: " << even << endl;
  cout << "Number of odd numbers: " << odd << endl;
  return 0;
}