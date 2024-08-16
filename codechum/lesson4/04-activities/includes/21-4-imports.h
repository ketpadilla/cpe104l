#include "../class/21-4-pet.cpp"

void testCase() {
    int n, test;
    Pet pet;
    
    cout << "Enter text case number: ";
    cin >> test;
    
    switch (test) {
        case 1:
            pet.move();
            break;
        case 2:
            pet.giveCompanionship(1);
            break;
        case 3:
            pet.giveCompanionship(3);
            break;
    }
}