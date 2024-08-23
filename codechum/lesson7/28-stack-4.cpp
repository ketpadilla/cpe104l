#include "includes/28-3-stack.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    Stack stack;
    string prefix, infix;
    cout << "Enter expression: "; 
    getline(cin, prefix);
    const char* cstring = prefix.c_str();
    int len = prefix.length(), ascii;
    string operand1, operand2;

    for (int i = 0; i < len; i++) {
        ascii = int(cstring[len - i - 1]);
        string symbol = string(1, cstring[len - i - 1]);
        if (ascii >= 65 && ascii <= 90) {
            stack.push(symbol);
        } else {
            operand2 = stack.pop();
            operand1 = stack.pop();
            infix = "(" + operand2 + " " + symbol + " " + operand1 + ")";
            stack.push(infix);
        }
    }
    
    cout << infix << endl;

    return 0;
}