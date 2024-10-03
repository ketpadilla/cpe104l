/* // * TASK
  A three-dimensional coordinate system has three points: x, y, and z, 
    arranged as (x, y, z) with an initial coordinate position of (0, 0, 0). 
    The coordinate system has six possible movements: 
      front, back, up, down, left, and right. 
    
    The front movement increases the x-coordinate by 1, 
      while the back movement decreases the X-coordinate by 1. 
    
    The up movement increases the z coordinate by 1, 
      while the down movement decreases the Z coordinate by 1. 
    
    The left movement increases the y-coordinate by 1, 
      and the right movement decreases the y-coordinate by 1. 
    
    Each movement is characterized by the numbers 1 to 6 
      (e.g., front movement is 1, left movement is 5, etc.). 
    
    Design a program that accepts a sequence of numbers from the user 
      completely comprised of the digits 1 to 6 and processes it as a 
      sequence of moves in the three-dimensional coordinate system. 
      If the user includes a number not within the range of 1 to 6, 
      the program will process the sequence. 
      However, it will only generate "No Movement" 
      while continuing to process the valid numbers in the sequence 
      as the output for that number
*/

#include "includes/helper.h"

int main() {
  int seq, maxLen = 8, pos[3] = {0, 0, 0}; // origin
  int idxEquiv[6] = {0, 0, 2, 2, 1, 1};
  string moveNum = "123456"; // front, back, up, down, left, right

  system("clear");
  askSeq(seq, maxLen); // ask sequence of numbers
  int seqLen = to_string(seq).size(); // get sequence length

  int moves[seqLen]; // get and process moves
  getMoves(moves, seqLen, seq);
  setMoves(pos, seqLen, idxEquiv, moveNum, moves);

  cout << endl;
  printPosition("Final", pos); // show final position
  cout << endl;
  return 0;
}