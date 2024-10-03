// directives
#include <iostream>
using namespace std;


// declarations
#define ask(var) cout << "Enter number: "; cin >> var;
void sum2Num(int num1, int num2);
void sum2Num();


// main
int main() {
  int num1, num2;

  cout << "Sum function with parameters:" << endl;
  ask(num1); ask(num2);
  sum2Num(num1, num2);

  cout << endl << "Sum function without parameters:" << endl;
  sum2Num();

  return 0;
}


// definitions
void sum2Num(int num1, int num2) {
  cout << "Sum: " <<  num1 + num2 << endl;
}


void sum2Num() {
  int num1, num2;
  ask(num1); ask(num2);

  cout << "Sum: " <<  num1 + num2 << endl;
}
