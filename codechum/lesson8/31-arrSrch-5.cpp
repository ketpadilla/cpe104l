#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target);

int main() {
  int size, x, idx;
  cout << "Enter array size: "; cin >> size;

  int arr[size];
  cout << "Enter elements of the array:" << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "Enter x: "; cin >> x;

  idx = linearSearch(arr, size, x);
  if (idx != -1)
    cout << arr[idx] << endl;

  return 0;
}

int linearSearch(int arr[], int size, int target) {
  for (int i = (size - 1); i >= 0; i--) {
    if ((arr[i] % target) == 0) {
      return i;
    }
  }
  
  return -1;
}