//Header file helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
#include <sstream>
#include "./orderedArrayList.h"
using namespace std;

void initilizeList(orderedArrayList& list) {
  string input; 
  int num;

  cout << "ENTER 8 INTEGERS " // prompt input 
      << endl << "(Separate with spaces)"
      << endl << endl << ":: ";
  getline(cin, input);

  stringstream s(input);
  while (s >> num) { // insert numbers individually
      list.insert(num);    
  }
} //end initilizeList

void removeElement(orderedArrayList& list) {
  int removeItem;

  cout << endl // prompt input
    << "Remove an integer" << endl
    << ":: Integer: ";
  cin >> removeItem;

  list.remove(removeItem);
} //end removeElement

void replaceElement(orderedArrayList& list) {
  int oldItem, repItem;

  cout << endl // prompt inputs
      << "Replace an integer" << endl
      << ":: Integer in list: ";
  cin >> oldItem;

  cout << ":: New integer: ";
  cin >> repItem;

  list.replaceAt(list.seqSearch(oldItem), repItem);
} //end replaceElement

#endif