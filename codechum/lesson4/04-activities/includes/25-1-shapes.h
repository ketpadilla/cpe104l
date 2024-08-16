#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

class Shape {
  public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

class Rectangle : public Shape {
  private:
    double width;
    double height;
  
  public:
    Rectangle(double width, double height) : width(width), height(height) {}

    double getArea() const {
      return width * height;
    }

    double getPerimeter() const {
      return 2 * (width + height);
    }
};

class Triangle : public Shape {
  private: 
    double a, b, c;
  
  public:
    Triangle(double a, double b, double c) : a(a), b(b), c(c) {}

    double getArea() const {
      double s = (a + b + c) / 2;
      return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double getPerimeter() const {
      return a + b + c;
    }
};

class Square : public Shape {
  private:
    double side;
  
  public:
    Square(double side) : side(side) {}

    double getArea() const {
      return side * side;
    }

    double getPerimeter() const {
      return 4 * side;
    }
};

class ShapeCollection {
  private:
    vector<Shape*> shapes;

  public:
    ShapeCollection(const vector<Shape*>& shapes) : shapes(shapes) {}

    void calculateAndPrintAreaAndPerimeter() const {
      for (int i = 0; i < shapes.size(); i++) {
        cout << fixed << setprecision(2);
        cout << "Area: " << shapes[i]->getArea();
        cout << endl;
        cout << "Perimeter: " << shapes[i]->getPerimeter() << "\n";
        cout << endl;
      }
    }
};