#include <iostream>
#include <cmath>
using namespace std;

#define ask(var) cout << "Enter an " << #var << ": "; cin >> var;
#define print(str) cout << str << endl
#define perfect(var) ((var - int(var)) == 0)

int main() {
    int integer;
    ask(integer);
    
    
    bool square = perfect(sqrt(integer)), cube = perfect(cbrt(integer));

    if (cube) {
        if (square) {
            print("Perfect in every way");
        } else if (integer % 2 == 0) {
            print("Perfect in even cubes");
        }
    } else if (cube && integer % 2 != 0) {
        print("Perfect in an odd way");
    } else if (integer == 27) {
            print("Perfect in an odd way");
    } else {
        print("Nothing special");
    }
    
    return 0;
}