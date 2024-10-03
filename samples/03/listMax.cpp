#include <iostream>
#include <cmath>
using namespace std;

int findMax(int arr[], int size) {
  if (size == 1) {
    return arr[0];
  }

  return max(arr[size - 1], findMax(arr, size - 1));
}

int main() {
  int size, max = -1;
  cout << "Enter the number of elements in the list: " << endl;
  cin >> size;

  int list[size];
  for (int i = 0; i < size; i++) {
    cout << "Enter element #" << i + 1<< ": ";
    cin >> list[i];
  }

  int maxVal = findMax(list, size);
  
  cout << "Array elements: ";
  for (int i = 0; i < size; i++) {
    cout << list[i] << " ";
  }

  cout << endl << "The max value is: " << maxVal << endl;
  return 0;
}