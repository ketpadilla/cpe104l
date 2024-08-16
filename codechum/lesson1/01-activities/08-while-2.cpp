#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i = 1;
    
    cout << "Enter a number: ";
    cin >> n;
    
    while (i <= (n*n)) {
        if ((sqrt(i) - int(sqrt(i))) == 0) {
            cout << i << endl;
        }
        i++;
    }
    
    return 0;
}