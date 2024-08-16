#include <iostream>
#include <string>
using namespace std;

class Performer {
  private:
    string name;
    int age;
    
  public:
    Performer(string name, int age) : name(name), age(age) {}

    string getName() {
      return name;
    }

    int getAge() {
      return age;
    }
};

class Singer : public Performer {
  private:
    string vocalRange;

  public:
    Singer(string name, int age, string vocalRange) : Performer(name, age), vocalRange(vocalRange) {}

    string getVocalRange() {
      return vocalRange;
    }

    void sing() {
      cout << getName() << " is singing with a " << vocalRange << " range." << endl;
    }
};

class Dancer : public Performer {
  private:
    string danceStyle;

  public:
    Dancer(string name, int age, string danceStyle) : Performer(name, age), danceStyle(danceStyle) {}

    string getDanceStyle() {
      return danceStyle;
    }

    void dance() {
      cout << getName() << " is performing " << danceStyle << " dance." << endl;
    }
};
