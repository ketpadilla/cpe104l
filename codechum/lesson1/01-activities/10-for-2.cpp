#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    
    cout << "Enter a number: ";
    cin >> n;
    
    for (int i = 5; i <= (n*5); i += 5) {
        cout << i << endl;
    }
    
    return 0;
}