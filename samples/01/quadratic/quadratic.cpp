/* // * TASK
  Create a program that calculates for 
    the roots of a quadratic equation
*/

#include "includes/helper.h"

int main() {
  double a, b, c;
  vector<double> rootComponents;
  string type;

  system("clear");
  askConstants(a, b, c);
  printEquation(a, b, c);
  findRoots(a, b, c, type, rootComponents);
  printRoots(type, rootComponents);
  return 0;
}