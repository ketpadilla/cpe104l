#include "../includes/27-5-node.h"
#include <iostream>
#include <utility>
using namespace std;

struct Node* createPairNode(int a, int b) {
    Node* pair = new Node;
    if (a > b) {
      swap(a, b);
    }

    pair->a = a;
    pair->b = b;
    pair->next = nullptr;

    return pair;
}

void printList(struct Node* node) {
    while (node != nullptr) {
        cout << "(" << node->a << ", " << node->b << ")";
        node = node->next;
        if (node != nullptr) {
            cout << " -> ";
        }
    }
}

void addFront(struct Node* head, struct Node* node) {
    node->next = head->next;
    head->next = node;
}