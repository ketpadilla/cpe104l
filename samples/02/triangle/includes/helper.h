//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
using namespace std;

void askUser(int& size) {
  cout << "Enter size (5-10) :: "; cin >> size;

  if (size < 5 || size > 10) { // validate size
    cout << "Invalid size. Try again." << endl;
    askUser(size);
  }
} //end askUser


void printTriangle(int size) {
  cout << endl; 

  for (int i = 0; i < size; i++) { // prints row
    for (int j = 0; j <= i; j++) {  // prints column
      cout << "*";
    } cout << endl;
  } cout << endl;
} //end printTriangle

#endif