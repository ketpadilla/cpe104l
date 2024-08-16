#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i = 3;
    
    cout << "Enter a number: ";
    cin >> n;

    do {
        cout << i << endl;
        i += 3;
    } while (i <= (n*3));
    
    return 0;
}