// directives
#include <iostream>
using namespace std;


// declarations
#define ask(var) cout << "Enter number: "; cin >> var;
int sum2Num(int num1, int num2);
int sum2Num();


// main
int main() {
  int num1, num2, sum1, sum2;

  cout << "Sum function with parameters:" << endl;
  ask(num1); ask(num2);
  sum1 = sum2Num(num1, num2);
  cout << "Sum: " << sum1 << endl;

  cout << endl << "Sum function without parameters:" << endl;
  sum2 = sum2Num();
  cout << "Sum2: " << sum2 << endl;

  return 0;
}


// definitions
int sum2Num(int num1, int num2) {
  return num1 + num2;
}


int sum2Num() {
  int num1, num2;
  ask(num1); ask(num2);

  return num1 + num2;
}
