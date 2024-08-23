#ifndef NODE_H
#define NODE_H

struct Node {
    double value;
    struct Node* next;
};

double sumLinkedList(struct Node* head);

#endif