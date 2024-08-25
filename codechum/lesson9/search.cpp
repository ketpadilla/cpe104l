#include <iostream>

struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* searchRecursive(Node* root, int target) {
	if (root == nullptr || root->data == target) {
		return root;
	}

	if (target < root->data) {
		return searchRecursive(root->left, target);
	}

	return searchRecursive(root->right, target);
}

Node* searchIterative(Node* root, int target) {
	while (root != nullptr && root->data != target) {
		if (target < root->data) {
			root = root->left;
		} else {
			root = root->right;
		}
	}

	return root;
}

int main() {
	// Create a binary search tree: 10 -> 5 -> 15 -> 3 -> 8 -> 12 -> 20
	Node* root = new Node(10);
	root->left = new Node(5);
	root->right = new Node(15);
	root->left->left = new Node(3);
	root->left->right = new Node(8);
	root->right->left = new Node(12);
	root->right->right = new Node(20);

	int target = 8;

	// Search recursively
	Node* resultRecursive = searchRecursive(root, target);
	if (resultRecursive != nullptr) {
		std::cout << "Value " << target << " found (recursive)." << std::endl;
	} else {
		std::cout << "Value " << target << " not found (recursive)." << std::endl;
	}

	// Search iteratively
	Node* resultIterative = searchIterative(root, target);
	if (resultIterative != nullptr) {
		std::cout << "Value " << target << " found (iterative)." << std::endl;
	} else {
		std::cout << "Value " << target << " not found (iterative)." << std::endl;
	}

	return 0;
}
