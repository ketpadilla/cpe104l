#include <iostream>
using namespace std;

void getMatchSticksNeeded();

int main() {
    getMatchSticksNeeded();
    
    return 0;
}

void getMatchSticksNeeded() {
    int houses, msticks;
    
    cout << "Enter the number of houses to make: ";
    cin >> houses;
    
    msticks = (6 * houses) - houses + 1;
    
    cout << "Number of matchsticks needed: " << msticks << endl;
}
