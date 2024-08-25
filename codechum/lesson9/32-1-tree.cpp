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
    
    if (value < node->value) {
        node->left = insert(node->left, value);
    } else if (value > node->value) {
        node->right = insert(node->right, value);
    }
    
    return node;
}

Node* search(Node* node, int value) {
    if (node == nullptr || node->value == value) {
        return node;
    }
    
    if (value < node->value) {
        return search(node->left, value);
    } else {
        return search(node->right, value);
    }
}