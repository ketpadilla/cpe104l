#include <iostream>
using namespace std;

#define ask(var) cout << "Enter the " << #var << ": "; cin >> var;

int main() {
    int year;
    
    ask(year);
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << "Year is a leap year." << endl;
    }
    
    return 0;
}