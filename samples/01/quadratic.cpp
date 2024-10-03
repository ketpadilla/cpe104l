#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

#define ask(var) cout << #var << ": "; cin >> var;
string checkRoots(double a, double b, double c);
void findRoots(double a, double b, double c, string type);

int main() {
  double a, b, c;

  cout << "Enter Equation (ax^2 + bx + c): " << endl;
  ask(a); ask(b); ask(c);

  cout << a << "x^2" << " + " << b << "x" << " + " << c << endl;

  findRoots(a, b, c, checkRoots(a, b, c));
  return 0;
}

string checkRoots(double a, double b, double c) {
  double determinant = (b*b) - (4*a*c);
  string type;

  if (determinant > 0.0) {
    type = "Real";
  } else if (determinant == 0.0) {
    type = "Repeated";
  } else if (determinant < 0.0) {
    type = "Complex";
  } else {
    type = "NA";
  }

  return type;
}

void findRoots(double a, double b, double c, string type) {
  double roots[2], real[2], imag[2];
  double determinant = (b*b) - (4*a*c);

  if (type == "Complex") {
    real[0] = -b/(2*a);
    real[1] = -b/(2*a);
    imag[0] = sqrt(-determinant)/(2*a);
    imag[1] = -sqrt(-determinant)/(2*a);
  } else {
    roots[0] = (-b - sqrt(determinant))/(2*a);
    roots[1] = (-b + sqrt(determinant))/(2*a);
  }

  cout << fixed << setprecision(2);
  if (type == "Real") {
    cout << "Roots: x1 = " << roots[0] << ", x2 = " << roots[1] << endl;
  } else if (type == "Repeated") {
    cout << "Roots: x1 = x2 = " << roots[0] << endl;
  } else {
    cout << "Roots: " << real[0] << "+" << imag[0] << ", x2 = " << real[1] << imag[1] << endl;
  }
}

