#include <iostream>
using namespace std;

#define ask(var) cout << "Enter " << #var << ": "; cin >> var;

int main() {
    int x,y,z;
    
    ask(x);
    ask(y);
    ask(z);
    
    if (x == y && y == z) {
        cout << "Triangle is equilateral." << endl;
    }
    
    return 0;
}