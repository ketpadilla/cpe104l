#include <iostream>

using namespace std;

int main() {
    int n; 
    
    do {
        cout << "Enter an integer: ";
        cin >> n;
        
        if (n > 0) {
            cout << "positive" << endl;
        } else if (n == 0) {
            break;
        } else {
            cout << "negative" << endl;
        }
    } while (true);
    
    return 0;
}