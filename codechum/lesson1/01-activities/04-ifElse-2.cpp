#include <iostream>
using namespace std;

char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

int main() {
    char character;
    bool vowel = false;
    
    cout << "Enter a character: ";
    cin >> character;
    
    if (isalpha(character)) {
        for (int i = 0; i <  5; i++) {
            if (tolower(character) == vowels[i]) {
                vowel = true;
            } 
        }
        
    }
    
    if (vowel) {
        cout << "The character is a vowel." << endl;
    } else {
        cout << "The character is a consonant." << endl;
    }
    
    return 0;
}