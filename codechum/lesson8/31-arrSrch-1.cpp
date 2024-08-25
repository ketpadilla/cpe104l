#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target);

int main() {
  int size, x, y, idx[2];
  cout << "Enter array size: "; cin >> size;

  int arr[size];
  cout << "Enter elements of the array:" << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "Enter x: "; cin >> x;
  cout << "Enter y: "; cin >> y;

  idx[0] = linearSearch(arr, size, x);
  idx[1] = linearSearch(arr, size, y);
  
  
  if (idx[0] == -1) {
    cout << arr[idx[1]] << " is between "  << x << " and " << y << endl;
  } else if (idx[1] == -1) {
    cout << arr[idx[0]] << " is between "  << x << " and " << y << endl;
  } else {
    for (int i = idx[0]; i <= idx[1]; i++) {
      cout << arr[i] << " is between "  << x << " and " << y << endl;
    }
  }

  return 0;
}

int linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (target == arr[i]) {
      return i;
    }
  }
  
  return -1;
}