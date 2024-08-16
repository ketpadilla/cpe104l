#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    string name, color;
    char gender;
    
    Cat(string Name, string Color, char Gender) : name(Name), color(Color), gender(Gender) {}
    
    string getName() {
        return name;
    }
    
    string getColor() {
        return color;
    }
    
    char getGender() {
        return gender;
    }
};

void testCase() {
    int test;
    string Name, Color;
    char Gender;
    
    cout << "Enter the test case number: ";
    cin >> test;
    
    switch(test) {
        case 1:
            Name = "Whiskers";
            Color = "Black";
            Gender = 'M';
            break;
        case 2:
            Name = "Daisy";
            Color = "While";
            Gender = 'F';
            break;
        case 3:
            Name = "Ginger";
            Color = "Orange";
            Gender = 'M';
            break;
    }
    
    Cat cat(Name, Color, Gender);
    cout << "Test Case " << test << ": " << endl;
    cout << "Name: " << cat.getName() << endl;
    cout << "Color: " << cat.getColor() << endl;
    cout << "Gender: " << cat.getGender() << endl;
}