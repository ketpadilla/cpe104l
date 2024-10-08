#include "includes/helper.h"

int main() {
  bSearchTreeType<int> tree;

  system("clear");
  askTree(tree); 

  printTraversal(tree, "Inorder");
  printTraversal(tree, "Preorder");
  printTraversal(tree, "Postorder");

  cout << endl << endl
    << "Nodes :: " << tree.treeNodeCount() << endl
    << "Leaves :: " << tree.treeLeavesCount() << endl;

  return 0;
}