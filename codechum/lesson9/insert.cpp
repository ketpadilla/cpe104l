#include <iostream>

struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* createNode(int value) {
	return new Node(value);
}

Node* insertNode(Node* root, int value) {
	if (root == nullptr) {
		return createNode(value);
	}

	if (value < root->data) {
		root->left = insertNode(root->left, value);
	} else if (value > root->data) {
		root->right = insertNode(root->right, value);
	}

	return root;
}

// In-order traversal to print the tree
void inOrderTraversal(Node* root) {
	if (root != nullptr) {
		inOrderTraversal(root->left);
		std::cout << root->data << " ";
		inOrderTraversal(root->right);
	}
}

int main() {
	// Create an empty binary search tree
	Node* root = nullptr;

	// Insert nodes into the binary search tree
	root = insertNode(root, 10);
	root = insertNode(root, 5);
	root = insertNode(root, 15);
	root = insertNode(root, 3);
	root = insertNode(root, 8);
	root = insertNode(root, 12);
	root = insertNode(root, 20);

	// Print the binary search tree using in-order traversal
	std::cout << "Binary Search Tree: ";
	inOrderTraversal(root);
	std::cout << std::endl;

	return 0;
}
