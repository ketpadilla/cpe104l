#include <iostream>
using namespace std;

//A Program with a Value Returning Function with Parameters
//Write a program that is able to return the sum of two numbers.

int sum(int x, int y);

int main(){
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	
	cout << "The sum of the numbers is: " << sum(num1, num2) << endl;
	return 0;
}

int sum(int x, int y){
	return x + y;	
}






