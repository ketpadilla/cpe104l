//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
#include <cmath>
using namespace std;

int findMax(int arr[], int size) {
  if (size == 1) {
    return arr[0]; 
  } return max(arr[size - 1], findMax(arr, size - 1));
} //end findMax

void getList(int* list, int size) {
  cout << endl 
    << "Enter elements: " << endl;

  for (int i = 0; i < size; i++) {
    cout << "#" << i + 1<< " :: ";
    cin >> list[i]; 
  } // prompt inputs 
} //end getList

void printList(int* list, int size) {
  cout << endl 
    << "List :: ";

  for (int i = 0; i < size; i++) {
    cout << list[i] << " ";
  }
} //end printList

#endif