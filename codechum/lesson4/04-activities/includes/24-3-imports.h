#include <iostream>
#include <string>
#include <sstream> 
#include <iomanip>
#include <cmath>
using namespace std;

class Number {
  private:
    int value;

  public:
    Number(int value) : value(value) {}

    int getValue() const {
      return value;
    }

    void setValue(int value) {
      this->value = value;
    }
};

class WholeNumber : public Number {
  public:
    WholeNumber(int value) : Number(value) {}

    void multiply(const WholeNumber& wholeNumber) {
      setValue(getValue() * wholeNumber.getValue());
    }

    string toString() const {
      return to_string(getValue());
    }
};

class DecimalNumber : public Number {
  private:
    int decimalPlaces;

  public:
    DecimalNumber(int value, int decimalPlaces) : Number(value), decimalPlaces(decimalPlaces) {}

    int getDecimalPlaces() const {
      return decimalPlaces;
    }

    void setDecimalPlaces(int decimalPlaces) {
      this->decimalPlaces = decimalPlaces;
    }

    // ? NOT MENTIONED IN THE INSTRUCTIONS
    string toString() const {
      double decimalValue = getValue() / pow(10, decimalPlaces);
      stringstream ss;
      ss << fixed << setprecision(decimalPlaces) << decimalValue;
      return ss.str();
    }

    void multiply(const DecimalNumber& decimalNumber) {
      int newValue = getValue() * decimalNumber.getValue();
      int totalDecimalPlaces = decimalPlaces + decimalNumber.getDecimalPlaces();
      setValue(newValue);
      setDecimalPlaces(totalDecimalPlaces);
    }
};