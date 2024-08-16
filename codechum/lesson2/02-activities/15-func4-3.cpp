#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var, str) cout << "Enter " << #var << str << ": "; cin >> var;
double calculateLinearEquation(double x, double slope, double y);

int main() {
    double x, slope, y;
    
    ask(x, "");
    ask(slope, "");
    ask(y, " intercept");
    
    double res = calculateLinearEquation(x, slope, y);
    cout << fixed << setprecision(2);
    cout << "Result: " << res << endl;
    
    return 0;
}

double calculateLinearEquation(double x, double slope, double y) {
    
    return ((x*slope) + y);
}
