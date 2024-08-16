#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var) cout << "Enter the " << #var << " of the triangle: "; cin >> var;
void getCalculation();

int main() {
    getCalculation();
    
    return 0;
}

void getCalculation() {
    double base, height;
    
    ask(base);
    ask(height);
    
    double area = (base * height) / 2;
    
    cout << fixed << setprecision(2);
    cout << "Result: " << area << endl;
}


