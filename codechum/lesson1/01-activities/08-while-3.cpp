#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i = 1;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    while (i <= n) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        
        i++;
    }
    
    return 0;
}