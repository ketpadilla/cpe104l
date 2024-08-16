#include <iostream>
using namespace std;

int main() {
    int num, startVal = 1;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << endl << "Multiplication Table" << endl;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            cout << j * startVal << "\t";
        }
        
        startVal++;
        cout << endl;
    }
    
    return 0;
}