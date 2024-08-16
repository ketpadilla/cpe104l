#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = -1; 
    
    do {
        
        if (n == 0) {
            break;
        }
        
        cout << "Enter a number: ";
        cin >> n;
        
        if (((n % 3) == 0) && ((n % 5) == 0)) {
            cout << "FizzBuzz" << endl;
        } else if ((n % 3) == 0) {
            cout << "Fizz" << endl;
        } else if ((n % 5) == 0) {
            cout << "Buzz" << endl; 
        } else {
            cout << n << endl;
        }
        
    } while (true);
    
    return 0;
}