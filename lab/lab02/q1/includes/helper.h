//Header File: helper.h 

#ifndef H_Helper
#define H_Helper

#include <iostream>
#include <string>
#include <sstream>
#include "./linkedQueue.h"
#include "./linkedStack.h"
using namespace std;

  // get input from user
void getInput(string& expr) {
  cout << "ENTER NUMBERS " // ask for input 
      << endl << "(Separate with spaces and end with \" ;\")"
      << endl << endl << ":: ";

  getline(cin, expr);
}//end getInput

  // process numbers individually based on given logic
void processNum(linkedStack<int>& stack, linkedQueue<int>& queue, string& expr, int& num) {
  stringstream s(expr); // convert into an arr of inputs
  
  while (s >> num) { // place one element into num per iteration
    if (num == ';') break;

    if (num % 2 == 0) {
      stack.push(num); // push even num to stack
    } else if (num % 2 != 0 && num % 3 == 0) {
      queue.addQueue(num); // add odd and div3 num to queue
    } else {
      stack.pop(); // remove top element and push the square of any other num to stack
      stack.push(num * num); 
    }
  }
} //end processNum 

#endif