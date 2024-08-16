#include <iostream>
using namespace std;

int countdown(int); 

int main() {
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    countdown(n);
    return 0;
}

int countdown(int n) {
    cout << n << " ";
    if (n != 0) {
        n--;
        countdown(n);
    }
    
    return 0;
}