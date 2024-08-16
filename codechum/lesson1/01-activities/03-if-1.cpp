#include <iostream>
using namespace std;

#define ask(var) cout << "Enter " << #var << ": "; cin >> var;

int main() {
    int x,y;
    
    ask(x);
    ask(y);
    
    if (x == y) {
        cout << "Numbers are equal." << endl;
    }
    
    return 0;
}