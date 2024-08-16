#include <iostream>
#include <string>
using namespace std;

class Shape {
  private:
    string name, color;
    bool isFlat;

  public:
    Shape(string name, string color, bool isFlat) : name(name), color(color), isFlat(isFlat) {}

    string getName() {
        return name;
    }

    string getColor() {
        return color;
    }

    bool getIsFlat() {
        return isFlat;
    }

    void setColor(string color) {
        this->color = color;
    }

};

class TwoDShape : public Shape {
  private:
    int numberOfSides;
  
  public:
    TwoDShape(string name, string color, int numberOfSides) : Shape(name, color, true), numberOfSides(numberOfSides) {}

    int getNumberOfSides() {
        return numberOfSides;
    }

    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class ThreeDShape : public Shape {
  public:
    ThreeDShape(string name, string color) : Shape(name, color, false) {}

    virtual double getSurfaceArea() = 0;
    virtual double getVolume() = 0;
};

class Square : public TwoDShape {
  private:
    double lengthOfSide;
  
  public:
    Square(string color, double lengthOfSide) : TwoDShape("Square", color, 4), lengthOfSide(lengthOfSide) {}

    double getLengthOfSide() {
        return lengthOfSide;
    }

    double getArea() override {
      return lengthOfSide * lengthOfSide;
    }

    double getPerimeter() override {
      return lengthOfSide * 4;
    }
};

class RectangularPrism : public ThreeDShape {
  private:
    double length, width, height;

  public:
    RectangularPrism(string color, double length, double width, double height) : ThreeDShape("Rectangular Prism", color), length(length), width(width), height(height) {}

    double getLength() {
      return length;
    }

    double getWidth() {
      return width;
    }

    double getHeight() {
      return height;
    }

    double getSurfaceArea() override {
      return 2 * (width * length + height * length + height * width);
    }

    double getVolume() override {
      return width * height * length;
    }
};