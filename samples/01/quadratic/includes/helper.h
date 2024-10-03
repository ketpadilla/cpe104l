//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

#define ask(var) cout << #var << " :: "; cin >> var; //end ask

void askConstants(double& a, double& b, double& c) {
  cout << "ROOTS OF A QUADRATRIC EQUATION:" << endl
    << "Enter a, b, and c (ax^2 + bx + c)" << endl;

  ask(a); ask(b); ask(c); // prompt inputs
} //end askConstants

string checkRoots(double& determinant) {
  return (determinant == 0.0) ? "Repeated" : (determinant > 0.0) ? "Real" : "Complex";
} //end checkRoots

void findRoots(double a, double b, double c, string& type, vector<double>& rootComponents) {
  double determinant = (b*b) - (4*a*c);
  type = checkRoots(determinant); // determine type of roots

    // calculate root components (not the actual roots)
  rootComponents.push_back(-b/(2*a));  // real part
  rootComponents.push_back(sqrt(abs(determinant))/(2*a)); // imaginary part
} //end findRoots

void printRoots(string type, vector<double> rootComponents) {
  vector<double> real, imag;
  cout << type << " Roots" << endl
    << ":: "; // print type of roots

  cout << fixed << setprecision(2);
  if (type == "Complex") { 
    cout << "x1 = " << rootComponents.front()
      << " + " << rootComponents.back() << "i" << endl
      << ":: x2 = " << rootComponents.front()
      << " - " << rootComponents.back() << "i" << endl;
  } else { // print real or repeated roots
    cout << "x1 = " << rootComponents.front() + rootComponents.back() << endl
      << ":: x2 = " << rootComponents.front() - rootComponents.back() << endl;
  } cout << endl;
} //end printRoots

void printEquation(double a, double b, double c) {
  cout << endl 
    << "Equation" << endl << ":: "
    << a << "x^2" << " + " 
    << b << "x" << " + " 
    << c << endl << endl;
} //end printEquation

#endif