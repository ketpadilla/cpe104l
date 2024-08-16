#include <iostream>
#include <string>
using namespace std;

#define print(quad, side, angle) cout << "Properties of a " << quad << ":" << endl << " - " << side << endl << " - " << angle << endl;

int main() {
    char quadrilateralType;
    string quad[4] = {"Square", "Rectangle", "Parallelogram", "Trapezoid"};
    string side[4] = {"All sides are equal", "Opposite sides are equal", "Opposite sides are parallel", "One pair of opposite sides are parallel"};
    string angle[4] = {"All angles are 90 degrees", "All angles are 90 degrees", "Opposite angles are equal", "Adjacent angles are supplementary"};
    int idx = -1;
    
    cout << "Enter the Quadrilateral type (S for Square, R for Rectangle, P for Parallelogram, T for Trapezoid): ";
    cin >> quadrilateralType;
    quadrilateralType = toupper(quadrilateralType);
    
    switch (quadrilateralType) {
        case 'S':
            idx = 0;
            break;
        case 'R':
            idx = 1;
            break;
        case 'P':
            idx = 2;
            break;
        case 'T':
            idx = 3;
            break;
        default:
            cout << "Invalid Quadrilateral type." << endl;
            break;
    }
    
    if (idx != -1) {
        print(quad[idx], side[idx], angle[idx]);
    }
    
    
    
    return 0;
}