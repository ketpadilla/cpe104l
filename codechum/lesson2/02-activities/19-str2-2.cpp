#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "Concatenated string: " << str << "Hello" << endl;
    
    return 0;
}