#include <iostream>
using namespace std;

#define ask(var) cout << "Enter " << #var << ": "; cin >> var;
int gcd(int a, int b); 

int main() {
    int a, b, lcm;
    ask(a); ask(b);
    
    lcm = gcd(a, b);
    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;
    return 0;
}

// ! EUCLID'S ALGORITHM
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    
    return gcd(b % a, a);
}