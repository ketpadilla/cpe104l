#include <iostream>
using namespace std;

#define ask(var) cout << "Enter " << #var << ": "; cin >> var;

int main() {
    char character;
    ask(character);
    
    if (!isalpha(character) && !isdigit(character)) {
        cout << "Character is a special character." << endl;
    }
    
    return 0;
}