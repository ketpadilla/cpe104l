#include <iostream>
#include <cstdlib>
#include "tree.h"

Node* createNode(int value) {
    Node* node = new Node;
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

void displayTree(Node* node) {
    if (node != nullptr) {
        displayTree(node->left);
        std::cout << node->value << " ";
        displayTree(node->right);
    }
}

Node* insert(Node* node, int value) {
    if (node == nullptr) {
        return createNode(value);
    }
    
    if (node->value > value) {
        node->left = insert(node->left, value);
    } else if (node->value < value) {
        node->right = insert(node->right, value);
    }
    
    return node;
}

Node* getMaximumValueNode(Node* node) {
    if (node == nullptr) {
        return nullptr;
    }
    
    while (node->right != nullptr) {
        node = node->right;
    }
    
    return node;
}