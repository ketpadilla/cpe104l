#include <iostream>
#include <string>
using namespace std;

class Beverage {
public:
    string flavor, color;
    
    Beverage() : flavor("Unknown"), color("Unknown") {}
    
    Beverage(string flavor, string color) {
        this->flavor = flavor;
        this->color = color;
    }
    
    void getFlavor() {
        cout << "Beverage Flavor: " << flavor << endl;
    }
    
    void getColor() {
        cout << "Beverage Color: " << color << endl;
    }
};

class Bottle {
public:
    int mL;
    Beverage beverage;
    
    Bottle(int mL, Beverage beverage) {
        this->mL = mL;
        this->beverage = beverage;
    }
    
    Bottle(int mL, string flavor, string color) {
        this->mL = mL;
        Beverage beverageHolder(flavor, color);
        
        beverage = beverageHolder;
    }
    
    void getML() {
        cout << "Bottle mL: " << mL << endl;
    }
    
    void getBeverage() {
        beverage.getFlavor();
        beverage.getColor();
    }

};

void testCase() {
    int test, mL;
    string flavor, color;
    
    cout << "Enter the test case number: ";
    cin >> test;
    
    cout << "Test Case " << test << ": ";
    switch(test) {
        case 1:
            cout << "Bottle with Beverage object (500 mL, Cola, Brown)";
            mL = 500;
            flavor = "Cola";
            color = "Brown";
            break;
        case 2:
            cout << "Bottle with Beverage object (500 mL, Cola, Brown)";
            mL = 250;
            flavor = "Lemon";
            color = "Yellow";
            break;
        case 3:
            cout << "Bottle with Beverage object (500 mL, Cola, Brown)";
            mL = 1000;
            flavor = "Unknown";
            break;
        case 4:
            cout << "Bottle with null Beverage object (500 mL)";
            mL = 500;
            flavor = "Unknown";
            break;
        case 5:
            cout << "Bottle with Beverage object (500 mL, Cola, Brown)";
            mL = 350;
            flavor = "Apple";
            color = "Green";
            break;
    }
    
    cout << endl;
    if (flavor.compare("Unknown")) {
        Beverage beverage;
        Bottle bottle(mL, beverage);
        bottle.getML();
        bottle.getBeverage();
    } else {
        Bottle bottle(mL, flavor, color);
        bottle.getML();
        bottle.getBeverage();
    }
}