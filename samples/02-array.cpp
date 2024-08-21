// directives
#include <iostream>
using namespace std;


// declarations
#define ask(var, idx) cout << "Enter num #" << idx + 1 << ": "; cin >> var;
void askArr(int arr[], int size);
void printArr(int arr[], int size);
int getExtreme(int arr[], int size, char type);


// main
int main() {
  int size = 10, num[size];
  
  askArr(num, size);
  printArr(num, size);
  cout << endl;

  int smallest = getExtreme(num, size, 's');
  int largest = getExtreme(num, size, 'l');
  cout << "Smallest num: " << smallest << endl;
  cout << "Largest num: " << largest << endl;

  return 0;
}


// definitions
void askArr(int arr[], int size) {
  int* arrPtr = arr;

  for (int i = 0; i < size; i++) {
    ask(arrPtr[i], i);
  }
}


void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

}


int getExtreme(int arr[], int size, char type) {
  int extreme = arr[0];

  for (int i = 0; i < size; i++) {
    if (type == 's') { 
      extreme = min(extreme, arr[i+1]);
    } else {
      extreme = max(extreme, arr[i+1]);
    }
  }

  return extreme;
}