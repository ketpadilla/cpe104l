// ! LESSON 1
// ? TOPIC 2: VARIABLES
// Directives
#include <iostream>
using namespace std;


// Global variables
int var1; // * Variable Declaration 
/* purpose:
  1. specify data type
  2. assign an initial value
  3. make it ready to use
*/

int var2 = 0; // * Variable Initialization
// provides an initial value 


// Main function
int main() {
  var1 = 1; // * Variable Assignment (=)
  // updates the value of the variable

  int var3 = var1 + var2; // * Variables in Expressions
  // variables are used as operands 

  cout << var3 << endl; // * Printing: display variable value

  return 0;
}


// * Naming
/*
  Following naming conventions…
    1. improves code clarity and maintainability
    2. reduces code complexity

  Avoid reserved keywords as variable names
*/
