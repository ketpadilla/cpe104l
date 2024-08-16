#include <iostream>
using namespace std;

#define ask(var) cout << "Enter an " << #var << ": "; cin >> var;
#define div(var, num) ((var % num)== 0)

int main() {
    int integer;
    ask(integer);

        
    if (div(integer, 4)) {
        cout << "The number is divisible by 4." << endl;
    } else if (div(integer, 3)) {
        cout << "The number is divisible by 3." << endl;
    } else if (div(integer, 2)) {
        cout << "The number is divisible by 2." << endl;
    } else {
        cout << "The number is not divisible by 2, 3, or 4." << endl;
    }
    
    return 0;
}