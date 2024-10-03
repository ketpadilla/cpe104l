// directives
#include <iostream>
using namespace std;

// declarations
int askUser();
void printTriangle(int size);


// main
int main() {
  int size;

  size = askUser();
  printTriangle(size);

  return 0;
}


// definitions
int askUser() {
  int input;

  cout << "Enter size (5-10): "; cin >> input;

  if (input < 5 || input > 10) {
    cout << "Invalid size. Try again." << endl;
    return askUser();
  } else {
    return input;
  }
}


void printTriangle(int size) {
  cout << endl; 

  for (int i = 0; i < size; i++) { // prints row
    for (int j = 0; j <= i; j++) {  // prints column
      cout << "*";
    }

    cout << endl;
  }

  cout << endl;
}