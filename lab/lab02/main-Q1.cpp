#include <iostream>
#include "includes/linkedQueue.h"
#include "includes/linkedStack.h"
using namespace std;

int main() {
  linkedStack<int> stack;
	linkedQueue<int> queue;
	int num, MAX = 12;

  cout << "Enter " << MAX << " numbers: ";

  for (int i = 0; i < MAX; i++) {
  cin >> num;

  if (num % 2 == 0) {
    stack.push(num);
  } else if (num % 2 != 0 && num % 3 == 0) {
    queue.addQueue(num);
  } else {
    stack.pop();
    stack.push(num * num);
  }
  }

  cout << endl;
  cout << "Stack: ";
  stack.print();

  cout << "Queue: ";
  queue.print();

  return 0;
}