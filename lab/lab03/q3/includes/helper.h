//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
#include <string>
#include <sstream>
#include "./binaryTree.h"
using namespace std;

  // ask tree elements
template<class elemType> 
void askTree(binaryTreeType<elemType>& tree) {
  string input; elemType element;

  cout << "ENTER TREE NUMBERS (IN PREORDER) " // ask for input 
      << endl << "(Separate with spaces and press enter to end)"
      << endl << ":: ";
  getline(cin, input);

  stringstream s(input);
  while (s >> element) {
    tree.insert(element);
  }
}

  // print traversals
template<class elemType>
void printTraversal(binaryTreeType<elemType>& tree, string type) {
  cout << endl  
    << type << "     \t:: ";

  if (type == "Inorder")
    tree.inorderTraversal();
  else if (type == "Preorder")
    tree.preorderTraversal();
  else if (type == "Postorder")
    tree.postorderTraversal();
  else 
    cout << "Invalid order" << endl;

}

  // print tree height
template<class elemType> 
void printHeight(binaryTreeType<elemType>& tree) {
  cout << endl << "Height\t\t:: " << tree.treeHeight() << endl << endl;
}

template<class elemType> 
void printAllTraversals(binaryTreeType<elemType>& tree, string status) {
  cout << endl 
    << "TREE " << status << " SWAP" << endl
    << "Traversal\tTree";

  printTraversal(tree, "Inorder");
  printTraversal(tree, "Preorder");
  printTraversal(tree, "Postorder");
  printHeight(tree);
}

#endif