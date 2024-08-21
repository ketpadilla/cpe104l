#include <iostream>
using namespace std;

int deleteElement(int* arr, int size, int value);

int main() {
    int size, value;
    cout << "Enter the size of the array: "; cin >> size;

    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of the element to be deleted: "; cin >> value;
    size = deleteElement(arr, size, value);

    cout << "The updated array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}

int deleteElement(int* arr, int size, int value) {
    int idx = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            idx = i;
            break;
        }
    }
    
    if (idx == -1) {
        return size;
    }
    
    for (int i = idx; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    return size - 1;
}