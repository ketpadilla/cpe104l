#include <iostream>
#include <string>
using namespace std;

#define print(str) cout << "Suggestion: " << str << endl;

int main() {
    string weather;
    
    cout <<"Enter the weather condition: ";
    cin >> weather;
    
    switch (weather[0]) {
        case 'S':
            print("Enjoy the sunshine");
            break;
        case 'C':
            print("Stay indoors");
            break;
        case 'R':
            print("Bring an umbrella");
            break;
        case 'W':
            print("Fly a kite");
            break;
        default:
            cout << "Invalid weather condition.";
            break;
    }

    return 0;
}