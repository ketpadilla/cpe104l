#include <iostream>
using namespace std;

//A Program with a Void Function with Parameters
//Write a program that is able to produce the sum of two numbers.

void sum(int x, int y);

int main(){
	int num1, num2;
	cout << "Enter the first number: " ;
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	
	sum(num1, num2);
	
	return 0;
}

void sum(int x, int y){
	int sum = x + y;
	cout << "The sum of the two numbers is: " << sum << endl;
}






