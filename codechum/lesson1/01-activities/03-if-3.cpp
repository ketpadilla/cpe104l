#include <iostream>
using namespace std;

#define ask(var) cout << "Enter " << #var << " number: "; cin >> var;

int main() {
    int first, second;
    
    ask(first);
    ask(second);
    
    if (((first > 0) && (second > 0)) || ((first < 0) && (second < 0))) {
        cout << "Numbers have the same sign." << endl;
    }
    
    return 0;
}