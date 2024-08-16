#include <iostream>
#include <string>
using namespace std;

class Animal {
  private:
    string name;

  public:
    Animal(const string& name) : name(name) {}

    virtual void makeSound() const = 0;

    string getName() const {
      return name;
    }
};

class Dog : public Animal {
  public:
    Dog(const string& name) : Animal(name) {}

    void makeSound() const override {
      cout << "Woof! My name is " << getName() << endl;
    }
};