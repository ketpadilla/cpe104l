#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

class Beverage {
  private:
    string name;
    int volume;
    bool isChilled;
  
  public:
    Beverage(string name, int volume, bool isChilled) : name(name), volume(volume), isChilled(isChilled) {}

    bool isEmpty() const {
      return volume == 0;
    }

    string toString() const {
      string str = (isChilled) ? "is still chilled" : "is not chilled anymore";
      return name + " (" + to_string(volume) + "mL) " + str;
    }

    string getName() const {
      return name;
    }

    int getVolume() const {
      return volume;
    }

    bool getIsChilled() const {
      return isChilled;
    }
};

class Water : public Beverage {
  private:
    string type;

  public:
    Water(int volume, bool isChilled, string type) : Beverage("Water", volume, isChilled), type(type) {}
    Water(int volume, bool isChilled) : Beverage("Water", volume, isChilled), type("Regular") {}

    string getType() const {
      return type;
    }
};

class Beer : public Beverage {
  private:
    double alcoholicContent;

  public:
    Beer(int volume, bool isChilled, double alcoholicContent) : Beverage("Beer", volume, isChilled), alcoholicContent(alcoholicContent) {}

    string getType() const {
      return (alcoholicContent * 100 < 3) ? "Flavored" : (alcoholicContent * 100 >= 3 && alcoholicContent * 100 < 6) ? "Regular" : "Strong";
    }

    string toString() const {
      string str = (getIsChilled()) ? "is still chilled" : "is not chilled anymore";
      
      ostringstream oss;
      oss << fixed << setprecision(1) << alcoholicContent * 100;
      string alcoholContentStr = oss.str();

      return getName() + " (" + to_string(getVolume()) + "mL) " + str + " (" + alcoholContentStr + "% alcoholic content)";
    }
};
