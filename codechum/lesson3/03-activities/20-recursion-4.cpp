//! TO REDO
#include <iostream>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive function to calculate the sum of the first n Fibonacci numbers
int sumFibonacci(int n) {
    if (n <= 0) return 0;
    return fibonacci(n - 1) + sumFibonacci(n - 1);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = sumFibonacci(n);
    cout << "Sum of the first " << n << " Fibonacci numbers is " << sum << "." << endl;

    return 0;
}
