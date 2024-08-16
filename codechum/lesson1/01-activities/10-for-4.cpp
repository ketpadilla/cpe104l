#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#define print(var) cout << "Number of '" << #var << "' occurrences: " << var << endl;

int main() {
    string str;
    int a, b;
    
    cout << "Enter a string: ";
    cin >> str;
    const char* input = str.c_str();
    // ! TO REVIEW * and ->

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == 'a') {
            a++;
        } else if (input[i] == 'b') {
            b++;
        }
    }
    
    print(a);
    print(b);
    
    return 0;
}