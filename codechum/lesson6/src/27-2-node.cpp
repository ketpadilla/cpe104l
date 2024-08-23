#include <iostream>
#include "../includes/27-2-node.h"
using namespace std;

Node* addNode(Node* head, int value) {
    Node* newHead = nullptr;
    newHead = new Node;
    newHead->value = value;
    newHead->next = head;

    return newHead;
}


void printList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        int num = current->value;
        cout << num;
        current = current->next;
        
        if (current->value == 0) {
            break;
        }
        
        cout << " -> ";
    }
}