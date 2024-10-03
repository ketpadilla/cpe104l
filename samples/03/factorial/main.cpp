/* // * TASK
  Create a recursion function for the 
    factorial of any positive integer.
*/

#include <iostream>
using namespace std;

int factorial(int num);

int main() {
  int num;
  
  system("clear");
  cout << "FACTORIAL RECUSION" << endl
    << "Enter num :: "; cin >> num;
    
  cout << num << "! = " 
    << factorial(num) 
    << endl << endl;

  return 0;
} 

int factorial(int num) {
  if (num == 0) {
    return 1; // 0! = 1
  } return num * factorial(num - 1);
} //end factorial