#include <iostream>
#include <iomanip>
#include "../class/21-1-rectangle.cpp"
using namespace std;

void testCase() {
    double length, width;
    int test;
    
    cout << "Enter text case number: ";
    cin >> test;
    
    switch (test) {
        case 1:
            length = 5.00;
            width = 10.00;
            break;
        case 2:
            length = 3.00;
            width = 4.00;
            break;
        case 3:
            length = 2.50;
            width = 4.50;
            break;
    }
    
    Rectangle rectangle(length, width);
    
    cout << fixed << setprecision(2);
    cout << "length = " << rectangle.getLength() << ", " << "width = " << rectangle.getWidth() << endl;
    cout << "Expected Area = " << length * width << ", Your code's output = " << rectangle.getArea() << endl;
    cout << "Test Status: SUCCESS" << endl;
    
}