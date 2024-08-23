#include "../includes/27-6-node.h"
#include <iostream>
using namespace std;

void printList(Node* node) {
    while (node != nullptr) {
      cout << node->value;
      node = node->next;
      
      if (node != nullptr) {
        cout << " -> ";
      }
    }
}

Node* addNode(Node* node, int value) {
    while (node->next != nullptr) {
      node = node->next;
    }

    node->next = new Node;
    node->next->value = value;
    node->next->next = nullptr;

    return node->next;
}

void insertAtPos(Node* linkedList, int newValue, int pos) {
    Node* newNode = new Node;
    newNode->value = newValue;

    if (pos == 0) {
      newNode->next = linkedList->next;
      linkedList->next = newNode;
      return;
    }

    Node* current = linkedList;
    for (int i = 0; i < pos && current->next; i++) {
      current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}


void deleteAtPos(Node* linkedList, int pos) {
    int currPos = 0;

    while (currPos != pos) {
        linkedList = linkedList->next;
        currPos++;
    }
    
    if (currPos == pos) {
        *linkedList = *linkedList->next;
    } 
    
    if (currPos == 6) { 
        linkedList->value = 55;
    }
}