#include <iostream>
using namespace std;

int main() {
    int size, j = size;

    cout << "Enter a number: ";
    cin >> size;

    for (int i = 1; i <= size; i++) {
        for (j = size; j > i; j--) {
            cout << " ";
        }
        
        for (int k = 0; k < j; k++) {
            cout << i;
        }

        cout << endl;
        j--;
    }

    return 0;
}