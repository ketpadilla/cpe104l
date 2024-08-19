#include <iostream>
using namespace std;

int main() {
  int rows = 6;

  // right triangle
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < (rows - i - 1); j++) {
      cout << " ";
    } 

    for (int k = 0; k <= i; k++) {
      cout << "*";
    }

    cout << endl;
  }

  cout << endl;

  // inverted triangle
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < (rows - i); j++) {
      cout << "*";
    } 
    
    cout << endl;
  }


  return 0;
}