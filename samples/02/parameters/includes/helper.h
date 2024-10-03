//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
using namespace std;

#define ask(var) cout << "  " << #var << " :: "; cin >> var;

void printSum(int sum) {
  cout << "  -------------"<< endl
    << "   sum :: " << sum
    << endl;
}

void sum2Num(int num1, int num2, int& sum) {
  sum = num1 + num2;
}

int sum2Num() {
  int num1, num2;
  ask(num1); ask(num2);
  return num1 + num2;
}

#endif