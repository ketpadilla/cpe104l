#include <iostream>
#include "array.h"
using namespace std;

bool arrayList::isEmpty() const {
  return (length == 0); } // empty -> true

bool arrayList::isFull() const {
  return (length == maxSize); } // max -> true

int arrayList::listSize() const {
  return length; } // size of array

int arrayList::maxListSize() const {
  return maxSize; } // maximum elements in array

void arrayList::print() const {
  for (int i  = 0; i < length; i++) {
    cout << list[i] << " ";
  } cout << endl; 
} // prints array elements in series

bool arrayList::isItemAtEqual(int loc, int val) const {
  if (loc < 0 || loc >= length) {
    cout << "The location is out of range";
    return false;
  }

  return (list[loc] == val);
} // check if the location (loc) is within range before checking if the user input equal the value 

// TODO


