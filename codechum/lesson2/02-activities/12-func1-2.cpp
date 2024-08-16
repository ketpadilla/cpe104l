#include <iostream>
using namespace std;

void printPass();
void printFail();

int main() {
    int grade;
    
    cout << "Enter the grade (between 0 and 100): ";
    cin >> grade;
    
    if (grade >= 60) {
        printPass();
    } else {
        printFail();
    }
    
    return 0;
}

void printPass() {
    cout << "Pass" << endl;
}

void printFail() {
    cout << "Fail" << endl;
}
