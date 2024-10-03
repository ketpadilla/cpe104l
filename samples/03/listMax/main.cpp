/* // * TASK
  Create program that asks for a list of numbers
    then finds the max (greatest) num in the list.
*/

#include "includes/helper.h"

int main() {
  int size, max = -1;

  system("clear");
  cout << "MAX NUMBER IN LIST" << endl;
  cout << "Number of list elments?" << endl
    << " :: ";
  cin >> size;

  int list[size];
  getList(list, size);

  max = findMax(list, size);
  printList(list, size);

  cout << endl << endl
    << "Max Value :: " 
    << max << endl << endl;

  return 0;
}