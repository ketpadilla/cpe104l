#include "includes/28-3-stack.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Stack stack;
    string data; const char* cstring;
    cout << "Enter string: ";
    getline(cin, data);
    
    cstring = data.c_str();
    for (int i = 0; i < data.length(); i++) {
      stack.push(cstring[i]);
    }

    bool paired = ((int(cstring[1]) - int(cstring[0])) == 1) ? true : false;
    
    bool balanced = false;
    while (!stack.isEmpty()) {
        if (paired) {
            char char1, char2;
            char2 = stack.pop();
            char1 = stack.pop();
            
            balanced = (int(char2) - int(char1) == 1) ? true : false;
            
            if (!balanced) {
                break;
            }
        } else {
            char left[data.length() / 2];
            char right[data.length() / 2];
            for (int i = 0; i < data.length(); i++) {
                if (i < (data.length()/2)) {
                    right[i] = stack.pop();
                } else {
                    left[i - (data.length()/2)] = stack.pop();
                }
            }
            
            for (int j = 0; j < data.length()/2; j++) {
                balanced = (abs(int(right[data.length()/2 - j - 1]) - int(left[j])) <= 2) ? true : false;
                
                if (!balanced) {
                    break;
                }
            }
        }
    }
    
    if (balanced) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}