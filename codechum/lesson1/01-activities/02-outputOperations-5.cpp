#include <iostream>
#include <string>
using namespace std;

int SPACE_LEN = 3;
const int LTR_HEIGHT = 5, LTR_WIDTH = 5;

void printLetterPattern(char ch, int row) {
    if (row == 0 || row == 4) {
        for (int i = 0; i < LTR_WIDTH; i++)
            cout << ch;
        
        return;
    }
    
    switch (ch) {
        case 'C':
            cout << "C    ";
            break;
        case 'O':
            cout << "O   O";
            break;
        case 'D':
            cout << "D   D";
            break;
        case 'E':
            if (row == 0 || row == 4) break;
            else if (row == 2) cout << "EEE  ";
            else cout << "E    ";
            break;
        default:
            break;
    }
}

int main() {
    string text = "CODE";
    int textLen = text.length();

    for (int i = 0; i < LTR_HEIGHT; i++) {
        for (int j = 0; j < textLen; j++) {
            printLetterPattern(text[j], i);

            if (j < textLen - 1) {
                for (int k = 0; k < SPACE_LEN; k++) {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
