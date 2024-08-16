#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, counter = 0;
    cout << "Enter a positive integer: ";
    cin >> number;
    
    while (number != 0) {
        counter++;
        number /= 10;
    }
    
    cout << "Number of digits: " << counter << endl;
    
    return 0;
}