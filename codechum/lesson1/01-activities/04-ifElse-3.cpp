#include <iostream>
using namespace std;

#define ask(var) cout << "Enter " << #var << " number: "; cin >> var;


int main() {
    int first, second, third;
    
    ask(first);
    ask(second);
    ask(third);
    
    if (first == second && first == third) {
        cout << "All numbers are equal." << endl;
    } else {
        cout << "Not all numbers are equal." << endl;
    }
    
    return 0;
}