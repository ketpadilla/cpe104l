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
    
    cout << "Sum of each row:" << endl;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0;  j < columns; j++) {
            sum += arr[i][j];
        }
        
        cout << sum << endl;
    }
    
    return 0;
}