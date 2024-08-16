#include <iostream>
#include <cmath>
using namespace std;

class ComplexCalculator {
public:

    ComplexCalculator() {}
    
    double getSquareRoot(int number) {
        if (number < 0) {
            return 0; 
        } else {
            return sqrt(number); 
        }
    }
    
    int getFactorial(int number) {
        if (number < 0) {
            return 0; 
        } else if (number == 0) {
            return 1;
        } else {
            return number * getFactorial(number - 1); 
        }
    }
    
    double getSum(int number1, int number2) {
        return number1 + number2;
    }
    
    double getProduct(int number1, int number2) {
        return number1 * number2;
    }
    
    double getDifference(int number1, int number2) {
        return number1 - number2;
    }
    
    double getQuotient(int number1, int number2) {
        if (number2 == 0) {
            return 0.00;
        } else {
            return number1 / number2;
        }
    }
};