#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int birth, current;
    
    cout << "Enter your birth year: ";
    cin >> birth;
    
    cout << "Enter the current year: ";
    cin >> current;
    
    double yrSqRt = sqrt(current - birth), val = yrSqRt - int(yrSqRt);

    if (val == 0.0) {
        cout << "Your age is a perfect square." << endl;
    } else {
        cout << "Your age is not a perfect square." << endl;
    }
    
    return 0;
}