#include <iostream>
#include "includes/28-1-stack.h"
using namespace std;

int main() {
    Stack stack;
    string text;
    
    cout << "Enter a string: ";
    getline(cin, text);
    const char* cstring = text.c_str();
    
    for (int i = 0; i < text.length(); i++) {
      stack.push(cstring[i]);
    }

    while (!stack.isEmpty()) {
        cout << stack.pop();
    }

    return 0;
}