#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var, unit) cout << "Enter your " << #var << " (in " << unit << "): "; cin >> var;
void displayBodyMetrics(double weight, double height);

int main() {
    double height, weight;
    
    ask(height, "meters");
    ask(weight, "kilograms");
    
    displayBodyMetrics(weight, height);
    
    return 0;
}

void displayBodyMetrics(double weight, double height) {
    cout << fixed << setprecision(2);
    cout << "BMI: " << (weight / (height * height)) << endl;
    
}

