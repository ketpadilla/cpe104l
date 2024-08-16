#include <iostream>
using namespace std;

#define parity(var) ((var % 2) == 0)
#define div(var, num) ((var % num) == 0)
#define print(str) cout << str << endl

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    if (parity(num)) {
        if (div(num, 4)) {
            print("Evenly divisible by 4");
        } else {
            print("Even number");
        }
    } else if (!parity(num)) {
        if (div(num, 3)) {
            print("Oddly divisible by 3");
        } else {
            print("Odd number");
        }
    }
    
    return 0;
}