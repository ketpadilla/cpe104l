#include <iostream>
using namespace std;


int findMax(int* arr, int size);


int main() {
  int size, max;
  cout << "Enter the size of the array: "; cin >> size;

  int arr[size]; 
  cout << "Enter the elements of the array: " << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }  
  
  max = findMax(arr, size);
  cout << "The maximum value in the array is " << max << endl;

  return 0;
}


int findMax(int* arr, int size) {
  if (size == 0) {
    return 0;
  } 
  
  int max = arr[0];

  for (int i = 0; i < size; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }

  return max;
}