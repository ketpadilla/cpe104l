#include "includes/28-5-stack.h"
#include <iostream>
#include <string>
#include <cstdlib> 

using namespace std;

int main() {
    Stack stack;
    string data;
    const char* cstring;
    cout << "Enter expression: ";
    getline(cin, data);
    
    cstring = data.c_str();
    int len = data.length();
    int i = 0;
    while (i < len) {
        if (cstring[i] == ' ') {
            i++;
            continue;
        }
        
        if (isdigit(cstring[i])) {
            string numberStr = "";
            
            while (i < len && isdigit(cstring[i])) {
                numberStr += cstring[i];
                i++;
            }
            
            int symbol = atoi(numberStr.c_str());
            stack.push(symbol);
        } else {
            int operand2 = stack.pop();
            int operand1 = stack.pop();
            char op = cstring[i];
            int result;

            switch (op) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                default:
                    cout << "Unknown operator" << endl;
                    return 1;
            }
            
            stack.push(result);
            i++;
        }
    }
    
    cout << stack.pop() << endl;
    
    return 0;
}