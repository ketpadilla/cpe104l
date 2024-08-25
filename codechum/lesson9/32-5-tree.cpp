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

Node* getMinimumValueNode(Node* node) {
    if (node == nullptr) {
        return nullptr;
    }
    
    while (node->left != nullptr) {
        node = node->left;
    }
    
    return node;
}

Node* deleteNode(Node* node, int value) {
    if (node == nullptr) {
        return node;
    }

	if (value < node->value) {
		node->left = deleteNode(node->left, value);
	} else if (value > node->value) {
		node->right = deleteNode(node->right, value);
	} else {
		if (node->left == nullptr) {
			Node* temp = node->right;
			delete node;
			return temp;
		} else if (node->right == nullptr) {
			Node* temp = node->left;
			delete node;
			return temp;
		}

		Node* successor = getMinimumValueNode(node->right);
		node->value = successor->value;
		node->right = deleteNode(node->right, successor->value);
	}

	return node;
}