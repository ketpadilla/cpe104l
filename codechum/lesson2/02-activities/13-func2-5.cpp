#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var) cout << "Enter the " << #var << " of the " << (string(#var).compare("side") == 0 ? "square: " : "circle: "); cin >> var;
double calculateSquareArea();
double calculateCircleArea();

double PI = 3.141592653589793;

int main() {
    double sqArea = calculateSquareArea();
    double cirArea = calculateCircleArea();
    cout << fixed << setprecision(2);
    cout << "Total area (square + circle): " << sqArea + cirArea << endl;
    
    return 0;
}

double calculateSquareArea() {
    double side;
    ask(side);
    
    return (side * side);
}

double calculateCircleArea() {
    double radius;
    ask(radius);
    
    return (PI * radius * radius);
}