#include <iostream>
using namespace std;

class Pet {
public:
    Pet() {}
    
    void move() {
        cout << "The pet has moved.";
    }
    
    void giveCompanionship(int n) {
        for (int i = 0; i < n; i++) {
            cout << "The pet is giving you companionship." << endl;
        }
    }
};