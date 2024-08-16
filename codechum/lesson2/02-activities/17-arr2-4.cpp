#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var) cout << "Enter the number of " << #var << ": "; cin >> var;

int main() {
    int rows, columns;
    
    ask(rows); ask(columns);
    
    int arr[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0;  j < columns; j++) {
             cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    
    cout << "Averages of each row:" << endl;
    for (int i = 0; i < rows; i++) {
        float total = 0;
        
        for (int j = 0;  j < columns; j++) {
            total += arr[i][j];
        }
        
        float avg = total/float(columns);
        cout << fixed << setprecision(2);
        cout << "Row " << i + 1 << ": " << avg << endl;
    }
    
    return 0;
}