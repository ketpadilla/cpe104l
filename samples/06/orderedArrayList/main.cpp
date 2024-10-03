/* // * TASK
Write the definitions of the functions of the class orderedArrayList
and write a program that tests the functions on the following data input: 
  21 10 56 43 78 11 20 18
*/

#include "includes/helper.h"

int main() {
  orderedArrayList list(8);
  system("clear");

  initilizeList(list);
  list.print();

  replaceElement(list);
  list.print();

  removeElement(list);
  list.print();

return 0;   
}
