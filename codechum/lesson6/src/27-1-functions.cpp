#include <iostream>
#include "../includes/27-1-functions.h"
using namespace std;

void printSquaredValues(Node* node) {
    Node* current = node;
    
    if (current) {
        current = current->next;
    }
    
    while (current != nullptr) {
        int num = current->value;
        cout << num*num;
        current = current->next;
        
        if (current != nullptr) {
            cout << " -> ";
        }
    }
}