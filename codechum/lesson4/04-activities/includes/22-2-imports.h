#include <iostream>
using namespace std;

class Bird {
public:
    string breed;
    bool isNocturnal;
    
    Bird() : breed("Unknown"), isNocturnal(false) {}
    
    Bird(string breed, bool isNocturnal) {
        this->breed = breed;
        this->isNocturnal = isNocturnal;
    }
    
    string getBreed() {
        return breed;
    }
    
    bool getIsNocturnal() {
        return isNocturnal;
    }
};

void printData(Bird bird) {
    cout << "Breed: " << bird.getBreed() << endl;
    cout << "Is Nocturnal: " << bird.getIsNocturnal() << endl;
}

void testCase() {
    int test;
    string breed;
    bool isNocturnal;
    
    cout << "Enter the test case number: ";
    cin >> test;
    
    switch(test) {
        case 1:
            breed = "None";
            break;
        case 2:
            breed = "Parrot";
            isNocturnal = false;
            break;
        case 3:
            breed = "Owl";
            isNocturnal = true;
            break;
    }
    
    cout << "Test Case " << test << ": ";
    if (breed.compare("None")) {
        Bird bird;
        cout << "Using default constructor" << endl;
        printData(bird);
    } else {
        Bird bird(breed, isNocturnal);
        
        if (breed.compare("Parrot")) {
            cout << "Using parametrized constructor (Parrot, false)" << endl; 
        } else {
            cout << "Using parametrized constructor (Owl, true)" << endl; 
        }
        
        printData(bird);
    }
}