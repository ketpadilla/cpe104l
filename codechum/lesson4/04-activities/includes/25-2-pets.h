#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pet {
  private:
    string type;
    bool isFriendly;

  public:
    Pet(string type, bool isFriendly) : type(type), isFriendly(isFriendly) {}

    virtual void makeNoise() const = 0;
    virtual string toString() const = 0;
};

class Lion : public Pet {
  public:
    Lion() : Pet("Lion", false) {}

    void makeNoise() const override {
      cout << "Roar!" << endl;
    }

    // ? NOT MENTIONED IN INSTRUCTIONS
    string toString() const override {
      return "Pet lion is not friendly";
    }
};

class Dog : public Pet {
  private:
    string breed;
  public:
    Dog(string breed) : Pet("Dog", true), breed(breed) {}

    void makeNoise() const override {
      cout << "Arf!" << endl;
    }

    string toString() const override {
      return "Pet dog is friendly [" + breed + "]";
    }
};

class Cat : public Pet {
  public:
    Cat() : Pet("Cat", true) {}

    void makeNoise() const override {
      cout << "Meow!" << endl;
    }

    // ? NOT MENTIONED IN INSTRUCTIONS
    string toString() const override {
      return "Pet cat is friendly";
    }
};

class PetHouse {
  public:
    void makeNoise(const vector<Pet*>& pets) {
      for (int i = 0; i < pets.size(); i++) {
        pets[i]->makeNoise();
      }
    }
};