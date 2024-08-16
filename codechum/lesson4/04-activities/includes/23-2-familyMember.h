#include <iostream>
#include <string>
using namespace std;

class FamilyMember {
  private:
    string type;

  public:
    FamilyMember(string type) : type(type) {}

    virtual void greet() {
      cout << type << endl;
    }

    string toString() {
      return "Family Member [" + type + "]";
    }
};

class Father : public FamilyMember {
  public: 
    Father() : FamilyMember("Father") {}

    void greet() override {
      cout << "I am your father" << endl;
    }
};

class Mother : public FamilyMember {
  public: 
    Mother() : FamilyMember("Mother") {}

    void greet() override {
      cout << "Mother knows best" << endl;
    }
};

class Son : public FamilyMember {
  public: 
    Son() : FamilyMember("Son") {}

    void greet() override {
      cout << "My father and mother love me" << endl;
    }
};