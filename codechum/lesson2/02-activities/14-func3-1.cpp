#include <iostream>
using namespace std;

#define ask(var) cout << "Enter your favorite " << #var << ": "; cin >> var;
#define print(var) cout << "Favorite " << #var << ": " << var << endl;
void displayFavorites(char* Color, char* Animal, int Number);

int main() {
    char color[20], animal[20];
    int number;
    
    ask(color);
    ask(animal);
    ask(number);
    
    displayFavorites(color, animal, number);
    
    return 0;
}

void displayFavorites(char* Color, char* Animal, int Number) {
    print(Color);
    print(Animal);
    print(Number);
    
}
