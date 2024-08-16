#include "../class/21-5-complexCalculator.cpp"
#include <iomanip>

#define print(str) cout << str << endl

void testCase() {
    int test;
    ComplexCalculator complexCalculator;
    
    cout << "Enter text case number: ";
    cin >> test;
    
    cout << fixed << setprecision(2);
    switch (test) {
        case 1:
            print("Testing Square Root");
            cout << "Square root of 16 (Expected: 4.00, Your code's output: " << complexCalculator.getSquareRoot(16) << ")" << endl;
            break;
        case 2:
            print("Testing Factorial");
            cout << "Factorial of 5 (Expected: 120.00, Your code's output: " << complexCalculator.getFactorial(5) <<  ")" << endl;
            break;
        case 3:
            print("Testing Sum");
            cout << "Sum of 4 and 5 (Expected: 9.00, Your code's output: " << complexCalculator.getSum(4, 5) <<  ")" << endl;
            break;
       case 4:
            print("Testing Product");
            cout << "Product of 4 and 5 (Expected: 20.00, Your code's output: " << complexCalculator.getProduct(4, 5) <<  ")" << endl;    
            break;
        case 5:
            print("Testing Difference");
            cout << "Difference of 10 and 5 (Expected: 5.00, Your code's output: " << complexCalculator.getDifference(10, 5) <<  ")" << endl;    
            break;
        case 6:
            print("Testing Quotient");
            cout << "Quotient of 10 and 2 (Expected: 5.00, Your code's output: " << complexCalculator.getQuotient(10, 2) <<  ")" << endl;
            break;
        case 7:
            print("Testing Quotient");
            cout << "Quotient of 10 and 0 (Expected: 0.00, Your code's output: " << complexCalculator.getQuotient(10, 0) <<  ")" << endl;
            break;
        case 8:
            print("Testing Square Root with Negative Input");
            cout << "Square root of -16 (Expected: 0.00, Your code's output: " << complexCalculator.getSquareRoot(-16) <<  ")" << endl;    
            break;
    }
}