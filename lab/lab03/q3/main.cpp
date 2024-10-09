#include "includes/helper.h"

int main() {
  binaryTreeType<int> tree;

  system("clear");
  askTree(tree); 

  printAllTraversals(tree, "BEFORE");
  tree.swapSubtrees();
  printAllTraversals(tree, "AFTER");

  return 0;
}