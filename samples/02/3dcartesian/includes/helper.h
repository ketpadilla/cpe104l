//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
#include <string>
using namespace std;

void getMoves(int* moves, int seqLen, int seq) {
  int seqCopy = seq;
  for (int i = 0; i < seqLen; i++) {
    moves[seqLen - i - 1] = seqCopy % 10; // place move at last index
    seqCopy /= 10; // eliminate last num
  }
} //end getMoves

void askSeq(int& seq, int maxLen) {
  cout << "ENTER A SEQUENCE OF MOVES" 
    << "(1-6; no spaces)" << endl
    << ":: ";
  cin >> seq; // prompt input

  if (to_string(seq).size() > maxLen) {
    cout << endl 
    <<  "Invalid sequence. Try again." 
    << endl;

    cin.clear(); // reprompt input
    askSeq(seq, maxLen);
  }
} //end askSeq

void printPosition(string type, int* pos) {
  cout << type << " Location :: "
    << "(" << pos[0] 
    << ", " << pos[1]
    << ", " << pos[2] << ")"
    << endl;
} //end printPosition

void setMoves(int* pos, int seqLen, int idxEquiv[], string moveNum, int* moves) {
  int idx = -1;

  cout << endl; 
  for (int i = 0; i < seqLen; i++) {
    idx = moveNum.find(to_string(moves[i])) + 1; // find the corresponding index of the move
    if (idx % 2 == 0 && idx != 0) { // go down or left
      pos[idxEquiv[idx - 1]]--; 
    } else if (idx != 0) { // go up or right
      pos[idxEquiv[idx - 1]]++; 
    } else {
      cout << "No movement" << endl; 
    }
  
    printPosition("Current", pos);
  }
} //end setMoves

#endif