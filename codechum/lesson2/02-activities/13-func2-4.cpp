#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var) cout << "Enter the " << #var << " of the cylinder: "; cin >> var;
double calculateCylinderVolume();

int main() {
    double vol = calculateCylinderVolume();
    cout << fixed << setprecision(2);
    cout << "Result: " << vol << endl;
    
    return 0;
}

double calculateCylinderVolume() {
    double radius, height, PI = 3.141592653589793;
    
    ask(radius);
    ask(height);
    
    return (PI * height * radius * radius * 4);
}
