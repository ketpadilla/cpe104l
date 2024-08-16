#include <iostream>
#include <cstring>
using namespace std;

int isPalindrome(char* str);

int main() {
    char str[50];
    cout << "Enter a string: ";
    cin >> str;
    
    cout << str;
    isPalindrome(str) ? cout << " is a palindrome." : cout << " is not a palindrome.";
    cout << endl;

    return 0;
}

int isPalindrome(char* str) {
    int start = 0, end = strlen(str) - 1;
    
    if (str[start] == str[end]) {
        if (end == 2) {
            return 1;
        }
        
        char newStr[end - 1];
        strncpy(newStr, str + 1, end - 2);
        newStr[end - 2] = '\0';
        return 1 + isPalindrome(newStr);
    }
    
    return 0;
}