#pragma once

#include <iostream>
#include <string>
using namespace std;

class ChessPiece {
  private:
    string type;
    bool isWhite;
  
  public:
    ChessPiece(string type, bool isWhite) : type(type), isWhite(isWhite) {}

    string getType() {
      return type;
    }

    bool getIsWhite() {
      return isWhite;
    }
};

class Pawn : public ChessPiece {
  private: 
    bool hasMoved;

  public:
    Pawn(bool isWhite) : ChessPiece("Pawn", isWhite), hasMoved(false) {}

    void move(bool isTwoMoves) {
      string str = (getIsWhite()) ? "White" : "Black";
      if (hasMoved) {
        return;
      }

      if (isTwoMoves) {
        cout << str << " pawn has moved two steps" << endl;
      } else {
        cout << str << " pawn has moved one step" << endl;
      }

      this->hasMoved = true;
    }

    string toString() {
      string str = (getIsWhite()) ? "White" : "Black";
      string move = (hasMoved) ? "already moved" : "not yet moved";
      return str + " pawn has " + move;
    }
};