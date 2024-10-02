/* // * TASK
  Create a program that asks for 10 integers and places
    them into a  descending-ordered linked list.
*/

#include <iostream>
#include "includes/orderedLinkedList.h"
using namespace std;

int main() {
  orderedLinkedList<int> list; 
  int num;

  cout << "Enter 10 intergers:" << endl;
  for (int i = 0; i < 10; i++) { // prompt user inputs  times
    cin >> num; 
    list.insert(num); // insert into list
  }

  cout << endl; // print ordered list
  cout << "List: "; list.print(); cout << endl; 

  return 0;
}