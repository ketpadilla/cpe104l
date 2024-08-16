// ! LESSON 1
// ? TOPIC 4: INPUT OPERATIONS
// Directives
#include <iostream> // * Input/Output 
/*
  cin - input 
  cout - output
  << - insertion operator
  
*/
#include <string>
using namespace std;


// Function Declarations
void printInt();
void printString();
  // data types will follow the same logic


// Main function
int main() {
  
  // get and print inputs
  printInt();
  printString();
  return 0;
}


// Function Definitions
// get and print integer
void printInt() {
  int integer;
  cout << "Enter an integer: ";
  cin >> integer;
  cout << "You entered: " << integer << endl;
}

// get and print string
void printString() {
  string str;
  cout << "Enter a string: ";
  cin >> str;
  cout << "You entered: " << str << endl;
}