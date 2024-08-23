#include "../includes/27-3-node.h"
#include <iostream>
using namespace std;

void insertAtPos(Node* linkedList, int newValue, int pos) {
    Node* current = linkedList;
    Node* newList = linkedList;
    int currPos = 0;

    while (true) {
        current = current->next;
        currPos++;

        if (currPos == pos) {
            break;
        }

        newList = newList->next;
    }

    newList->value = newValue;
    newList->next = current->next;
}

void printList(Node* head) {
    Node* current = head;

    if (current->value == 0) {
        current = current->next;
    }
    
    while (current != nullptr) {
        int num = current->value;
        cout << num;
        current = current->next;
        
        if (current == nullptr) {
            break;
        }
        
        cout << " -> ";
    }
}


// Do not modify
Node* createNode(int value) {
    Node* newNode = new Node;
    if (newNode == nullptr) {
        std::cerr << "Memory allocation failed." << std::endl;
        exit(1);
    }
    newNode->value = value;
    newNode->next = nullptr;
    return newNode;
}