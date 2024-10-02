#include <iostream>
using namespace std;

//A Program with a Value Returning Function with no Parameters
//Write a program that is able to return the sum of two numbers.

int sum();

int main(){
	cout << "The sum of the numbers is: " << sum() << endl;
	return 0;
}

int sum(){
	int num1, num2;
	cout << "Enter the first number: " ;
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	
	return num1 + num2;	
}






