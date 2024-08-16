#include <iostream>
#include <string>
using namespace std;

int main() {
    string colors[3];
    
    for (int i = 0; i < 3; i++) {
        cout << "Enter color " << i+1 << ": ";
        cin >> colors[i];
    }
    
    cout << "Mixing " << colors[0] << ", " << colors[1] << ", and " << colors[2] << " creates a new color!" << endl;
    
    return 0;
}