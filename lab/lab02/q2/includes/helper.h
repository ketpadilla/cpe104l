//Header File: helper.h 

#ifndef H_Helper
#define H_Helper

#include <iostream>
#include <string>
#include <sstream>
#include <cstring> 
#include "./arrayStack.h"
using namespace std;

  // get input from user
void getInput(char ch[], int MAX) {
  cout << "ENTER ARITHMETIC EXPRESSION " // ask for input 
      << endl << "(End with \";\")"
      << endl << endl << ":: ";

  cin.get(ch, MAX);
}//end getInput

  // checks if the grouping symbols match
bool isMatching(char open, char close) {
  return (open == '(' && close == ')') ||
    (open == '[' && close == ']') ||
    (open == '{' && close == '}');
}//end isMatching

  // finds groupings symbols and checks if they match
void checkGroupingSymbols(arrayStack<char>& stack, char ch[]) {
  for (int i = 0; ch[i] != ';'; i++) { // place one element into ch (char) per iteration
    
    if (ch[i] == '(' || ch[i] == '{' || ch[i] == '[') stack.push(ch[i]); // place opening symbols into stack

    if ((ch[i] == ')' || ch[i] == '}' || ch[i] == ']') &&
     (!stack.isEmptyStack() || isMatching(stack.top(), ch[i]))) {
      stack.pop(); // remove opening symbol from stack if it matches with the closing symbol
    }
  }
}//end checkGroupingSymbols

  // tells whether the expression has valid or invalid grouping symbols
void printIsExprValid(arrayStack<char>& stack, char ch[]) {
  cout << endl << "EXPRESSION: " << ch
    << endl << "Matching Grouping Symbols? ";

  if (stack.isEmptyStack()) { // check stack for remaining grouping sybols
    cout << "YES" << endl;;
  } else {
    cout << "NO" << endl;
  } cout << endl;
}//end IsExprValid

#endif