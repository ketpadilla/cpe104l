#include <iostream>
using namespace std;

//A Program with a Void Function with no Parameters
//Write a program that is able to produce the sum of two numbers.

void sum();

int main(){
	sum();
	
	return 0;
}

void sum(){
	int num1, num2;
	cout << "Enter the first number: " ;
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	int sum = num1 + num2;
	cout << "The sum of the two numbers is: " << sum << endl;
}






