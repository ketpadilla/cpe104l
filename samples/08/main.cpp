#include "includes/insertionSort.h"

int main() {
  int length = 10;
  int arr[10] = {10, 8, 4, 2, 5, 9, 6, 7, 1, 3};

  system("clear");
  cout << "USING INSERTION SORT" << endl
    << "Array::\t10 8 4 2 5 9 6 7 1 3" 
    << endl << endl;

  insertionSort(arr, length);
  cout << endl;

  cout << "Sorted List: ";
  printList(arr, length);
  cout << endl;

  return 0;
}