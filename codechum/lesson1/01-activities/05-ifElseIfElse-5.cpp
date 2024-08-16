#include <iostream>
#include <string>
using namespace std;

#define ask(var) cout << "Enter " << #var << ": "; cin >> var;
#define print(var) cout << #var << " count: " << var << endl;

int main() {
    int day;
    ask(day);
        
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    if (day >= 1 && day <= 7) {
        cout << days[day - 1] << endl;
    } else if (!(day >= 1 && day <= 7)) {
        cout << "Invalid input" << endl;
    }

    return 0;
}