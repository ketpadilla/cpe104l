#include <iostream>
using namespace std;

#define ask(var) cout << "Enter your birth " << #var << ": "; cin >> var;


int main() {
    int month, day;
    
    ask(month);
    ask(day);
    
    if ((month == 12 && (day >= 22 && day <= 31)) || (month == 1 && (day <= 19 && day >= 1))) {
        cout << "Your zodiac sign is Capricorn." << endl;
    } else {
        cout << "Your zodiac sign is not Capricorn." << endl;
    }
    
    return 0;
}