#include "includes/helper.h"

int main() {
  arrayStack<char> stack;
  int MAX = 100;
  char ch[MAX];

  system("clear");
  getInput(ch, MAX);
  checkGroupingSymbols(stack, ch);
  printIsExprValid(stack, ch);

  return 0;
}