#include <iostream>
#include <string>
#include "includes/28-2-stack.h"
using namespace std;

int main(void) {
    Stack* stack = createEmptyStack();
    string text; 
    const char* cstring;

    for (int i = 1;; i++) {
        cout << "Enter operation " << i << ": ";
        getline(cin, text);
        cstring = text.c_str();

        if (cstring[0] == '#') {
          break;
        }

        int num = 0;
        for (int j = 2; j < text.length(); j++) {
            num += (int(cstring[j]) - 48) * pow(10, text.length() - j - 1);
        }
        
        if (cstring[0] == '-') {
            pop(stack);
        } else {
            push(stack, num);
        }
        
    }

    int min = pop(stack), val;

    while(!isEmpty(stack)) {
        val = pop(stack);
        min = (min < val) ? min : val;
    } 
    
    cout << "Minimum element: " << min << endl;

    return 0;
}