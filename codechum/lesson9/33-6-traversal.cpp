#include <iostream>
#include "tree.h"

Node* createNode(int value) {
    Node* node = new Node;
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

Node* insert(Node* node, int value) {
    if (node == nullptr) {
        return createNode(value);
    }

    if (value < node->value) {
        node->left = insert(node->left, value);
    } else if (value > node->value) {
        node->right = insert(node->right, value);
    }

    return node;
}

int sumLeftChildren(Node* node) {
    int sum;
    if (node == nullptr) {
        return 0;
    }
    
    sum = (node->left != nullptr) ? node->left->value : 0;
    return sum + sumLeftChildren(node->left) + sumLeftChildren(node->right);
}