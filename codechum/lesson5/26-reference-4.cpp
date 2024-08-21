#include <iostream>
using namespace std;


int addElement(int* arr, int size, int value);


int main() {
  int size, value;
  cout << "Enter the size of the array: "; cin >> size;

  int arr[size + 1];
  cout << "Enter " << size << " elements:" << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "Enter the value to be added: "; cin >> value;
  size = addElement(arr, size, value);

  cout << "Updated array:" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  } cout << endl;

  return 0;
}


int addElement(int* arr, int size, int value) {
  arr[size] = value;
  return size + 1;
}