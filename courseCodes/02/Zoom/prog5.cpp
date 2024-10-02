#include <iostream>
using namespace std;

//Create an array with 5 user-defined elements
//Obtain the sum and average of the elements in the array

int main(){
	int list[5];
	double sum;
	cout << "Enter the elements of the array: " << endl;
	for (int i = 0; i < 5; i++){
		cout << "Element " << i+1 << ": ";
		cin >> list[i];
		sum += list[i];
	}
	
	cout << "\nThe elements of the array are: ";
	for (int i = 0; i < 5; i++)
		cout << list[i] << " ";
	
	cout << endl;
	cout << "The sum of the elements in the array is: " << sum << endl;
	cout << "The average of the elements in the array is: " << sum / 5 << endl;
	return 0;
}
