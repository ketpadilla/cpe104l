//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
using namespace std;

void getNum(int& num) {
  cout << "SUM OF CUBES" << endl
    << "Get to sum of cubes from 1 to? " << endl
    << "  num :: ";
  cin >> num;
} //end getNum

int sumCubes(int num) {
  if (num == 0) {
    return 0;
  } return (num*num*num) + sumCubes(num-1);
} //end sum

#endif