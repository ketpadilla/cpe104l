#include <iostream>
#include <string>
using namespace std;

#define ask(var) cout << "Enter " << #var << ((string(#var).compare("Size") == 0) ? ": " : " Character: "); cin >> var;

int main() {
    char First, Second;
    int Size, dash = 0;
    
    ask(First);
    ask(Second);
    ask(Size);
    
    for (int i = 1; i <= Size; i++) {
        for (int j = 0; j < dash; j++) {
            cout << "-";
        }
        
        if (i % 2 != 0) {
            cout << First;
        } else {
            cout << Second;
        }
        
        dash++;
        cout << endl;
    }

    return 0;
}