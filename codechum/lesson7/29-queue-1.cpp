#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include "includes/29-1-queue.h"
using namespace std;

int main() {
    Queue* queue = createEmptyQueue();
    string expression; const char* cstring;
    int len, value, counter = 0;
    double total;
    
    cout << "Enter operations:" << endl;
    while (true) {
        getline(cin, expression);
        cstring = expression.c_str();
        len = expression.length();

        if (cstring[0] == '#') {
            break;
        } else if (cstring[0] == '-') {
            dequeue(queue);
        } else if (cstring[0] == '+') {
            value = 0;
            for (int i = 2; i < len; i++) {
                value += (int(cstring[i]) - 48) * pow(10, len - i - 1) ;
            }

            enqueue(queue, value);
        }

        
    }

    while (!isEmpty(queue)) {
        counter++;
        total += dequeue(queue);
        cout << fixed << setprecision(2);
        cout << "Running Average: " << total/counter << endl;
    }
    
    return 0;
}