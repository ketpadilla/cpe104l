#include <iostream>
using namespace std;

#define ask(var) cout << #var << ": "; cin >> var;

int main() {
  int num1, num2, num3, mid;
  cout << "Enter three numbers: " << endl;
  ask(num1); ask(num2); ask(num3);

  //! assumes 3 unique numbers are inputted
  if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
    mid = num1;
  } else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
    mid = num2;
  } else if ((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2)) {
    mid = num3;
  } 
  
  cout << "Middle Number: " << mid << endl;
  return 0;
}