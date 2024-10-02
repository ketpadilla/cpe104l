/* // * TASK
  Create a sentinel-controlled program that asks for integers
    until -999 is inputted and does the following:

      • Inserts an even integer to the back of a linked list.
      • Inserts an odd integer to the front of a linked list.
*/

#include <iostream>
#include "includes/unorderedLinkedList.h"
using namespace std;

int main() {
  unorderedLinkedList<int> list;
  int num, sentinel = -999;

  cout << "Enter intergers (-999 to end):" << endl;
  cin >> num;

  while (num != sentinel) { // check if input is sentinel value
    if (num % 2 == 0) { // if even number
      list.insertLast(num);
    } else { // if odd number
      list.insertFirst(num);
    }

    cin >> num;
  }

  cout << endl; // print list
  cout << "List: "; list.print(); cout << endl;

  return 0;
}