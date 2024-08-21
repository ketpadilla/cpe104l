#include <iostream>
using namespace std;


void addElement(int* arr, int size, int value);


int main() {
  int size, value;
  cout << "Enter the size of the array: "; cin >> size;

  int arr[size + 1];
  cout << "Enter " << size << " elements:" << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "Enter the value to be added: "; cin >> value;
  addElement(arr, size, value);

  cout << "Updated array:" << endl;
  for (int i = 0; i < size + 1; i++) {
    cout << arr[i] << " ";
  } cout << endl;

  return 0;
}


void addElement(int* arr, int size, int value) {
  arr[size] = value;
}