#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double arr[6];
    
    cout << "Enter 6 double values:" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    
    cout << "Array elements:" << endl;
    cout << fixed << setprecision(3);
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << "\t";
    }
    
    return 0;
}