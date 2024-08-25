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

  int total = linearSearch(arr, size, x);
  
  if (total >= y) {
    cout << x << " exists at least " << y << " times in the array" << endl;
  }
  

  return 0;
}

int linearSearch(int arr[], int size, int target) {
  int total = 0;
  for (int i = 0; i < size; i++) {
    if (target == arr[i]) {
      total++;
    }
  }
  
  return total;
}