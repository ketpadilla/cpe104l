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

Node* findMinValue(Node* root) {
	while (root->left != nullptr) {
		root = root->left;
	}
	return root;
}

Node* deleteNode(Node* root, int value) {
	if (root == nullptr) {
		return root;
	}

	if (value < root->data) {
		root->left = deleteNode(root->left, value);
	} else if (value > root->data) {
		root->right = deleteNode(root->right, value);
	} else {
		if (root->left == nullptr) {
			Node* temp = root->right;
			delete root;
			return temp;
		} else if (root->right == nullptr) {
			Node* temp = root->left;
			delete root;
			return temp;
		}

		Node* successor = findMinValue(root->right);
		root->data = successor->data;
		root->right = deleteNode(root->right, successor->data);
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
	// Create a binary search tree: 10 -> 5 -> 15 -> 3 -> 8 -> 12 -> 20
	Node* root = nullptr;
	root = insertNode(root, 10);
	root = insertNode(root, 5);
	root = insertNode(root, 15);
	root = insertNode(root, 3);
	root = insertNode(root, 8);
	root = insertNode(root, 12);
	root = insertNode(root, 20);

	// Print the original binary search tree using in-order traversal
	std::cout << "Original Binary Search Tree: ";
	inOrderTraversal(root);
	std::cout << std::endl;

	// Delete node with value 5
	root = deleteNode(root, 5);

	// Print the modified binary search tree after deletion using in-order traversal
	std::cout << "Modified Binary Search Tree: ";
	inOrderTraversal(root);
	std::cout << std::endl;

	return 0;
}
