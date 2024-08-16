#include <iostream>
#include <string>
using namespace std;

#define print(str) cout << "Message: " << str << endl;

int main() {
    string difficulty;
    char diff[3] = {'E', 'M', 'H'};
    
    cout <<"Enter the difficulty level (Easy, Medium, Hard): ";
    cin >> difficulty;
    
    switch (difficulty[0]) {
        case 'E':
            print("You selected Easy difficulty. Enjoy the game!");
            break;
        case 'M':
            print("You selected Medium difficulty. Get ready for a challenge!");
            break;
        case 'H':
            print("You selected Hard difficulty. Brace yourself for a tough gameplay!");
            break;
        default:
            cout << "Invalid difficulty level.";
            break;
    }

    return 0;
}