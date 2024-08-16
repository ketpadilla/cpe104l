#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter an integer: ";
    cin >> number;
    
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    
    cout << "Sum of digits: " << sum << endl;
    
    return 0;
}