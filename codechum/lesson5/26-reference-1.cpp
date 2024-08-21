#include <iostream>
using namespace std;


void multiplyBy3(int* num);


int main() {
  int num;
  cout << "Enter an integer: "; cin >> num;

  multiplyBy3(&num);
  cout << "Value after multiplying by 3: " << num << endl;
  
  return 0;
}


void multiplyBy3(int* num) {
  *num *= 3;
}