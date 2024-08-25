#ifndef TREE_H
#define TREE_H

struct Node {
    int value;
    Node* left;
    Node* right;
};

Node* createNode(int value);
Node* insert(Node* node, int value);
Node* search(Node* node, int value);
void displayTree(Node* node);

#endif // TREE_H