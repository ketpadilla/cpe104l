//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
using namespace std;

void printRightTriangle(int rows) {
  cout << "Right Triangle" << endl;

  for (int i = 0; i < rows; i++) { // iterate rows
    for (int j = 0; j < (rows - i - 1); j++) { // iterate columns (blank)
      cout << " ";
    } 

    for (int k = 0; k <= i; k++) { // iterate columns (*)
      cout << "*";
    }

    cout << endl; // next row
  }

  cout << endl;
}//end printRightTriangle

void printInvertedRightTriangle(int rows) {
  cout << "Inverted Right Triangle" << endl;

  for (int i = 0; i < rows; i++) { // iterate rows
    for (int j = 0; j < (rows - i); j++) {
      cout << "*"; // print * over columns
    } cout << endl; // next row
  }
}//end printInvertedRightTriangle

#endif