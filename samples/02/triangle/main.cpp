/* // * TASK
  Create program that prints a right triangle using "*".
    The triangle should only have 5-10 rows.
*/

#include "includes/helper.h"

int main() {
  int size;

  system("clear");
  cout << "PRINT A RIGHT TRIANGLE" << endl;

  askUser(size);
  printTriangle(size);

  return 0;
}