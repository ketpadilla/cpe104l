#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    int diff = n % 10;
    n /= 10;
    
    for (int i = 0; n > 0; i++) {
        diff -= n % 10;
        n /= 10;
    }
    
    cout << "Result of subtracting digits: " << diff << endl;
    
    return 0;
}