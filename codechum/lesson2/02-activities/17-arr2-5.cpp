#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var) cout << "Enter the number of " << #var << ": "; cin >> var;

int main() {
    int rows, columns;
    
    ask(rows); ask(columns);
    
    int arr1[rows][columns];
    cout << "Enter the elements of the first array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0;  j < columns; j++) {
             cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr1[i][j];
        }
    }
    
    int arr2[rows][columns];
    cout << "Enter the elements of the second array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0;  j < columns; j++) {
             cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    }
    
    int counter = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0;  j < columns; j++) {
            if (arr1[i][j] != arr2[i][j]) {
                counter++;
            }
        }
    }
    
    cout << "Number of differences between the two matrices: " << counter << endl;
    
    return 0;
}