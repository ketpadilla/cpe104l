#include "includes/helper.h"

int main() {
  linkedStack<int> stack;
	linkedQueue<int> queue;
	int num;
  string expr;

  system("clear"); 
  getInput(expr);
  processNum(stack, queue, expr, num);

  cout << endl;
  stack.print();
  queue.print(); 
  cout << endl;

  return 0;
}
