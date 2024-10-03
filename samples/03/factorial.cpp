#include <iostream>
using namespace std;

int factorial(int num) {
  if (num == 0) {
    return 1;
  }

  return num * factorial(num - 1);
}

int main() {
  int num;
  cout << "Enter num: "; cin >> num;
  cout << num << "! = " << factorial(num) << endl;

  return 0;
}