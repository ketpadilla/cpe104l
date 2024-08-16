#include <iostream>
using namespace std;

class HypotheticalAbstract1 {
  protected:
    int a, b;

  public:
    HypotheticalAbstract1(int a, int b) : a(a), b(b) {}

    virtual int getValue1() = 0;
    virtual int getValue2() = 0;
};

class HypotheticalAbstract2 : public HypotheticalAbstract1 {
  public:
    HypotheticalAbstract2(int a, int b) : HypotheticalAbstract1(a, b) {}

    int getValue1() override {
      return a + b;
    }
};

class HypotheticalAbstract3 : public HypotheticalAbstract2 {
  public:
    HypotheticalAbstract3(int a, int b) : HypotheticalAbstract2(a, b) {}

    int getValue2() override {
      return a * b;
    }
};

class HypotheticalNonAbstract : public HypotheticalAbstract3 {
  public:
    HypotheticalNonAbstract(int a, int b) : HypotheticalAbstract3(a, b) {}
};
