#include <iostream>
#include <string>
using namespace std;

#define valid(str) cout << "The given sides form " << str  << " triangle." << endl;
#define invalid(str) cout << "The given sides do not form " << str << " triangle." << endl;

int main() {
    char triangle;
    float side[3];
    string text;
    
    cout << "Enter the triangle type identifier (E for Equilateral, I for Isosceles, S for Scalene): ";
    cin >> triangle;
    triangle = toupper(triangle);
    
    for (int i = 0; i < 3; i++) {
        cout << "Enter the length of side " << i + 1 << ": ";
        cin >> side[i];
    }
    
    
    switch (triangle) {
        case 'E':
            text = "an Equilateral";
            if (side[0] == side[1] && side[0] == side[2]) {
                valid(text);
            } else {
                invalid(text);
            }
                
            break;
        case 'I':
            text = "an Isosceles";
            if (side[0] == side[1] || side[0] == side[2] || side[1] == side[2]) {
                valid(text);
            } else {
                invalid(text);
            }
            
            break;
        case 'S':
            text = "a Scalene";
            if (!(side[0] == side[1]) && !(side[0] == side[2]) && !(side[1] == side[2])) {
                valid(text);
            } else {
                invalid(text);
            }
            
            break;
        default:
            cout << "Invalid triangle type identifier";
            break;
    }

    return 0;
}