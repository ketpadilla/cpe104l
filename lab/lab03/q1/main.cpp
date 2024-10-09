#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

  // prototypes
template<class elemType>
void copyList(elemType list[], elemType listCopy[], int length);

template<class elemType>
void printList(elemType list[], int length, int iteration);

template<class elemType>
void bubbleSort(elemType list[], int length, int iteration, int index);

template<class elemType>
int minLocation(elemType list[], int first, int last);

template<class elemType>
void swap(elemType list[], int first, int second);

template<class elemType>
void selectionSort(elemType list[], int length, int loc);

template<class elemType>
void askList(elemType list[], int& counter);

template<class elemType>
void showSorting(elemType list[], int length);

template<class elemType>
void printSortedList(elemType list[], int length);

  // main
int main() {
  int MAX = 100;
  int list[MAX], length = 0;
  system("clear");
  askList(list, length);

  showSorting(list, length);
  cout << endl;
  return 0;
}

  // definitions
template<class elemType>
void printSortedList(elemType list[], int length) {
  cout << "SORTED ARRAY" 
    << endl << ":: ";
  for (int i = 0; i < length; i++) {
    cout << list[i] << " ";
  } cout << endl;
} //end printSortedList

template<class elemType>
void showSorting(elemType list[], int length) {
  int listCopy[length];
  copyList(list, listCopy, length);

  cout << endl
    << "BUBBLE SORT" << endl
    << "Iteration:\tList:" << endl;
  bubbleSort(listCopy, length, 0, 0);

  cout << endl << "BUBBLE-";
  printSortedList(listCopy, length);

  copyList(list, listCopy, length);
  cout << endl
    << "SELECTION SORT" << endl
    << "Iteration:\tList:" << endl;
  selectionSort(listCopy, length, 0);

  cout << endl << "SELECTION-";
  printSortedList(listCopy, length);
} //end showSorting

template<class elemType>
void copyList(elemType list[], elemType listCopy[], int length) {
  for (int i = 0; i < length; i++) {
    listCopy[i] = list[i];
  }
} //end copyList

template<class elemType>
void printList(elemType list[], int length, int iteration) {
  cout << iteration << "\t\t";
  for (int i = 0; i < length; i++) {
    cout << list[i] << " ";
  } cout << endl;
} //end printList

template<class elemType>
void bubbleSort(elemType list[], int length, int iteration, int index) {
  if (index == 0 && iteration < length) printList(list, length, iteration + 1);

  if (iteration + 2 == length) return;
  else if (index == length - iteration - 1) {
    iteration++; index = 0;
    return bubbleSort(list, length, iteration, index);
  } else {
    if (list[index] > list[index + 1]) {
      elemType temp = list[index];
      list[index] = list[index + 1];
      list[index + 1] = temp;
    }

    index++;
    return bubbleSort(list, length, iteration, index); 
  }
} //end bubbleSort

template<class elemType>
int minLocation(elemType list[], int first, int last) {
    if (first == last) return first;

    int minIndex = minLocation(list, first + 1, last);

    if (list[first] < list[minIndex]) return first;
    else return minIndex;
} //end minLocation

template <class elemType>
void swap(elemType list[], int first, int second) {
    elemType temp;

    temp = list[first];
    list[first] = list[second];
    list[second] = temp;
} //end swap

template<class elemType>
void selectionSort(elemType list[], int length, int loc) {
    if (loc == length) return;

    printList(list, length, loc + 1);
    int minIndex = minLocation(list, loc, length - 1);
    swap(list, loc, minIndex);

    loc++;
    return selectionSort(list, length, loc);
} //end selectionSort

template<class elemType>
void askList(elemType list[], int& counter) {
  string input; elemType element;

  cout << "ENTER LIST NUMBERS "
      << endl << "(Separate with spaces and press enter to end)"
      << endl << ":: ";
  getline(cin, input);

  stringstream s(input);
  while (s >> element) {
    list[counter] = element;
    counter++; 
  }
} //end askList