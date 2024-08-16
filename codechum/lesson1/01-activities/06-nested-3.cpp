#include <iostream>
#include <string>
using namespace std;

#define print(str) cout << str << endl

int main() {
    short age, idx = -1; char genre;
    string books[] = {"The Adventures of Tom Sawyer", "Nancy Drew: The Secret of the Old Clock", "Harry Potter and the Sorcerer's Stone", "Ender's Game", "No recommendation available"};
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your genre preference (a for adventure, m for mystery, f for fantasy, s for science fiction): ";
    cin >> genre;
    
    if (age >= 8 && age <= 12) {
        if (genre == 'a') {
            idx = 0;
        } else if (genre == 'm') {
            idx = 1;
        }
    } else if (age > 12) {
        if (genre == 'f') {
            idx = 2;
        } else if (genre == 's') {
            idx = 3;
        }
    } 
    
    if (idx == -1) {
        print("No recommendation available");
    } else {
        print(books[idx]);
    }
    
    return 0;
}