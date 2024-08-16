#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define ask(var) cout << "Enter " << ((string(#var) != "x") ? "coefficient " : "value of ") << #var << ": "; cin >> var;
void evaluatePolynomial(double a, double b, double c, double d, double x);

int main() {
    double a, b, c, d, x;
    
    ask(a);
    ask(b);
    ask(c);
    ask(d);
    ask(x);
    
    evaluatePolynomial(a, b, c, d, x);
    
    return 0;
}

void evaluatePolynomial(double a, double b, double c, double d, double x) {
    double val = (a*pow(x,3)) + (b*x*x) + (c*x) + d;
    
    cout << fixed << setprecision(2);
    cout << "Value of the polynomial: " << val << endl;
    
}
