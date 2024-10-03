//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
using namespace std;

void askArr(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << "#" << i + 1
      << " :: "; 
    cin >> arr[i];
  } 
} //end askArr

void printArr(int arr[], int size) {
  cout << endl 
    << "Array" << endl
    << ":: ";

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  } cout << endl;
} //end printArr

int getExtreme(int arr[], int size, char type) {
  int extreme = arr[0];

  for (int i = 0; i < size - 1; i++) {
    if (type == 's') { // get smallest num
      extreme = min(extreme, arr[i+1]);
    } else { // get largest num
      extreme = max(extreme, arr[i+1]);
    }
  } return extreme;
} //end getExtreme

#endif