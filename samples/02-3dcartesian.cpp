#include <iostream>
#include <string>
using namespace std;

void askSeq(int& seq, int maxLen);


int main() {
  int seq, maxLen = 8;
  int pos[3] = {0, 0, 0}; // origin
  string moveNum = "123456"; // front, back, up, down, left, right

  askSeq(seq, maxLen); // ask sequence of numbers
  int seqLen = to_string(seq).size(); // get sequence length

  // getMoves
  int moves[seqLen], seqCopy = seq;
  for (int i = 0; i < seqLen; i++) {
    moves[seqLen - i - 1] = seqCopy % 10;
    seqCopy /= 10; 
  }

  // setMoves
  int idx = -1;
  int idxEquiv[6] = {0, 0, 2, 2, 1, 1};
  for (int i = 0; i < seqLen; i++) {
    idx = moveNum.find(to_string(moves[i])) + 1;
    if (idx % 2 == 0 && idx != 0) {
      pos[idxEquiv[idx - 1]]--;
    } else if (idx != 0) {
      pos[idxEquiv[idx - 1]]++;
    } else {
      cout << "No movement" << endl;
    }

    cout << "Current location: (" << pos[0] << ", " << pos[1] << ", " << pos[2] << ")" << endl;
  }

  cout << "Final location: (" << pos[0] << ", " << pos[1] << ", " << pos[2] << ")" << endl;
  return 0;
}

void askSeq(int& seq, int maxLen) {
  cout << "Enter sequence of move (1-6; no spaces): ";
  cin >> seq;

  if (to_string(seq).size() > maxLen) {
    cout << "Invalid sequence. Try again." << endl;
    askSeq(seq, maxLen);
  }
}