/* // * TASK
  Create program that prints the sum of two numebers.
    Create a function that uses parameters,
    and another that does not use parameters.
*/

#include "includes/helper.h"

int main() {
  int num1, num2, sum;

  system("clear");
  cout << "SUM FUNCTIONS" << endl
    << "With Parameters:" << endl; 
  ask(num1); ask(num2);
  sum2Num(num1, num2, sum);
  printSum(sum);

  cout << endl 
    << "Without Parameters:" << endl;
  sum = sum2Num();
  printSum(sum);
  cout << endl;

  return 0;
}
