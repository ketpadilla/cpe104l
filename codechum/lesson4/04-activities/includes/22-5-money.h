#include <iostream>
#include <string>
using namespace std;

class Money {
  public:
    int amount;
    string denomination;

    Money() : amount(0), denomination("Unknown") {}
    Money(int amount) : amount(amount), denomination("Unknown") {}
    Money(int amount, string denomination) : amount(amount), denomination(denomination) {}

    void display() {
      cout << "Amount: " << amount << endl;
      cout << "Denomination: " << denomination << endl;
    }
};

void testCase() {
    int test, amount;
    string denomination;
    
    cout << "Enter the test case number: ";
    cin >> test;
    
    cout << "Test Case " << test << ": ";
    switch(test) {
        case 1:
            cout << "Using default constructor";
            break;
        case 2:
            cout << "Using second constructor version with only amount (100)";
            amount = 100;
            break;
        case 3:
            cout << "Using third constructor version (50, USD)";
            amount = 50;
            denomination = "USD";
            break;
        case 4:
            cout << "Using third constructor version (200, EUR)";
            amount = 200;
            denomination = "EUR";
            break;
        case 5:
            cout << "Using second constructor version with only amount (500)";
            amount = 500;
            denomination = "Unknown";
            break;
    }

    cout << endl;
    if (test == 1) {
      Money money;
      money.display();
    } else if (test == 2) {
      Money money(amount);
      money.display();
    } else {
      Money money(amount, denomination);
      money.display();
    }
}