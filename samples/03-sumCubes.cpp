#include <iostream>
using namespace std;

int sum(int num) {
  if (num == 0) {
    return 0;
  }

  return (num*num*num) + sum(num-1);
}

int main() {
  int num;
   
  cout << "Enter number: ";
  cin >> num;

  cout << "Sum of cubes from 1 to " << num << ": " << sum(num) << endl;

  return 0;
}