/* // * TASK
  Create a program that uses loops to print the following:

         *
        **
       ***
      ****
     *****
    ******

    ******
    *****
    ****
    ***
    **
    *

*/

#include "includes/helper.h"

int main() {
  int rows = 6;

  system("clear");
  cout << "PRINT TRIANGLES" << endl 
    << "(rows = " << rows << ")" << endl
    << endl;
    
  printRightTriangle(rows);
  printInvertedRightTriangle(rows);
  cout << endl;

  return 0;
}