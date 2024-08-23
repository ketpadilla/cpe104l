#include "includes/28-5-stack.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    Stack stack;
    string postfix, prefix;
    cout << "Enter expression: "; 
    getline(cin, postfix);
    const char* cstring = postfix.c_str();
    int len = postfix.length(), ascii;
    string operand1, operand2;

    for (int i = 0; i < len; i++) {
        ascii = int(cstring[i]);
        string symbol = string(1, cstring[i]);
        if (ascii >= 65 && ascii <= 90) {
            stack.push(symbol);
        } else {
            operand2 = stack.pop();
            operand1 = stack.pop();
            prefix = symbol + operand1 + operand2;
            stack.push(prefix);
        }
    }
    
    cout << prefix << endl;

    return 0;
}