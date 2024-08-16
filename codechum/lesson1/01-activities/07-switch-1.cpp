#include <iostream>
#include <string>
using namespace std;

#define ask(var) cout << "Enter a " << #var << " between 1 and 7: "; cin >> var;

int main() {
    int number, idx;
    ask(number);
        
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    switch (number) {
        case 1:
            cout << days[number - 1] << endl;
            break;
        case 2:
            cout << days[number - 1] << endl;
            break;
        case 3:
            cout << days[number - 1] << endl;
            break;
        case 4:
            cout << days[number - 1] << endl;
            break;
        case 5:
            cout << days[number - 1] << endl;
            break;
        case 6:
            cout << days[number - 1] << endl;
            break;
        case 7:
            cout << days[number - 1] << endl;
            break;
        default:
            cout << "Invalid input." << endl;
            break;
    }

    return 0;
}