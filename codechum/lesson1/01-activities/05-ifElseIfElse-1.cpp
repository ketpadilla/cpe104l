#include <iostream>
using namespace std;

#define ask(var) cout << "Enter " << #var << " number: "; cin >> var;
#define pos(var) (var > 0)
#define div2(var) ((var % 2)== 0)

int main() {
    int first, second, third;
    
    ask(first);
    ask(second);
    ask(third);
    
    if (pos(first) && pos(second) && pos(third)) {
        cout << "All numbers are positive." << endl;
    } else if (!pos(first) && !pos(second) && !pos(third)) {
        cout << "All numbers are negative." << endl;
    } else if (div2(first) && div2(second) && div2(third)) {
        cout << "All numbers are even." << endl;
    } else if (!div2(first) && !div2(second) && !div2(third)) {
        cout << "All numbers are odd." << endl; 
    } else {
        cout << "Numbers are different." << endl;
    }
    
    return 0;
}