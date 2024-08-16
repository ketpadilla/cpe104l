#include <iostream>
using namespace std;

#define ask(var) cout << "Enter a " << #var << ": "; cin >> var;
#define div(var, num) ((var % num)== 0)

int main() {
    int year;
    ask(year);

        
    if (div(year, 100)) {
        if (div(year, 400)) {
            cout << "It's a leap century year." << endl;
        } else {
            cout << "It's a century year." << endl;
        }
    } else if (!div(year, 100) && div(year, 4)) {
        cout << "It's a leap year." << endl;
    } else {
        cout << "It's neither a leap year nor a century year." << endl;
    }
    
    return 0;
}