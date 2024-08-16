#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var) cout << "Enter " << #var << " of the rectangle: "; cin >> var;
double calculateRectanglePerimeter();

int main() {
    double perim = calculateRectanglePerimeter();
    cout << fixed << setprecision(2);
    cout << "Perimeter of the rectangle: " << perim << endl;
    
    return 0;
}

double calculateRectanglePerimeter() {
    double length, width;
    
    ask(length);
    ask(width);
    
    return (2*(length + width));
}
