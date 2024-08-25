#include <iostream>
#include "tree.h"
using namespace std;

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

void inorderTraversal(Node* node) {
    if (node == nullptr) {
        return;
    }
    
    inorderTraversal(node->left);
    cout << node->value << " ";
    inorderTraversal(node->right);
}