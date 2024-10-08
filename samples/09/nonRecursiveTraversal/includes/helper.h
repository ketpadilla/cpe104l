//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
#include <string>
#include <sstream>
#include "./binarySearchTree.h"
using namespace std;

  // ask tree elements
template<class elemType> 
void askTree(bSearchTreeType<elemType>& tree) {
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

template<class elemType>
void printTraversal(bSearchTreeType<elemType>& tree, string type) {
  cout << endl  
    << type << " Traversal"
    << endl << ":: ";

  if (type == "Inorder")
    tree.inorderTraversal();
  else if (type == "Preorder")
    tree.preorderTraversal();
  else if (type == "Postorder")
    tree.postorderTraversal();
  else 
    cout << "Invalid order" << endl;

}

#endif