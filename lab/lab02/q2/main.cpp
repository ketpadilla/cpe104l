#include <iostream>
#include "includes/arrayStack.h"
using namespace std;

bool isMatching(char open, char close);

int main() {
  arrayStack<char> stack;
  int MAX = 100;
  char ch[MAX];

	cout << "Input expression (end with ;): ";
  cin.get(ch, MAX);

  for (int i = 0; ch[i] != ';'; i++) {
    if (ch[i] == ' ') continue;
  
    if (ch[i] == '(' || ch[i] == '{' || ch[i] == '[') stack.push(ch[i]);
    
    if ((ch[i] == ')' || ch[i] == '}' || ch[i] == ']') &&
     (!stack.isEmptyStack() || isMatching(stack.top(), ch[i]))) {
      stack.pop();
    }
  }

  if (!stack.isEmptyStack()) {
    cout << "Expression doe NOT have matching grouping symbols." << endl;;
  } else {
    cout << "Expression HAS matching grouping symbols." << endl;
  }

  return 0;
}

bool isMatching(char open, char close) {
  return (open == '(' && close == ')') ||
    (open == '[' && close == ']') ||
    (open == '{' && close == '}');
}