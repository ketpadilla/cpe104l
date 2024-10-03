/* // * TASK
  Ask for 10 integers and place them into an array.
  Find and print the smallest and largest numbers.
*/


#include "includes/helper.h"

int main() {
  int size = 10, num[size];
  
  system("clear");
  cout << "ENTER 10 NUMBERS" << endl;
  askArr(num, size);
  printArr(num, size);
  cout << endl;

  int smallest = getExtreme(num, size, 's');
  int largest = getExtreme(num, size, 'l');
  cout << "Smallest num: " << smallest << endl;
  cout << "Largest num: " << largest << endl;

  return 0;
}
