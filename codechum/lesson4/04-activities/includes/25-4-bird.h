#include <iostream>
#include <vector>
using namespace std;

class Bird {
  public:
  Bird() {}

  virtual void makeSound() const = 0;
};

class Parrot : public Bird {
  public:
  Parrot() {}

  void makeSound() const override {
    cout << "Tweet Tweet" << endl;
  }
  
};

class Sparrow : public Bird {
  public:
  Sparrow() {}

  void makeSound() const override {
    cout << "Chirp Chirp" << endl;
  }
  
};

class BirdCage {
  public:
  BirdCage() {}

  void makeBirdSounds(const vector<Bird*>& birds) const {
    for (int i = 0; i < birds.size(); i++) {
      birds[i]->makeSound();
    }
  }

};
