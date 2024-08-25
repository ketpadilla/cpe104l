#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int target, int* pIdx, int* pCount);

int main() {
    int size, x;
    cout << "Enter array size: "; cin >> size;

    int arr[size];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int idx[size], count = 0;
    idx[0] = -1;
    int* pIdx = idx;
    int* pCount = &count;

    cout << "Enter x: "; cin >> x;
    linearSearch(arr, size, x, pIdx, pCount);

    if (idx[0] == -1) {
        cout << x << " does not exist in the array" << endl;
    }
    for (int i = 0; i < count; i++) {
        cout << x << " is found at index " << idx[i] << endl;
    }

    return 0;
}

void linearSearch(int arr[], int size, int target, int* pIdx, int* pCount) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            pIdx[*pCount] = i;
            (*pCount)++;
        }
    }
}