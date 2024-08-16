#include <iostream>
using namespace std;

#define ask(var) cout << "Enter the number of " << #var << ": "; cin >> var;

int main() {
    int rows, columns;
    
    ask(rows); ask(columns);
    
    int arr[rows][columns];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0;  j < columns; j++) {
             cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    
    cout << "Elements of the array:" << endl;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0;  j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}