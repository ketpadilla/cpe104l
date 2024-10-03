// directives
#include "includes/helper.h"

// main
int main() {
  int size;

  system("clear");
  cout << "PRINT A RIGHT TRIANGLE" << endl;

  askUser(size);
  printTriangle(size);

  return 0;
}