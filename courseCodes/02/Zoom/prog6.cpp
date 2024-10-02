#include <iostream>
using namespace std;

//Create an array with 5 user-defined elements
//Obtain the value of the largest and smallest element in the array

int main(){
	int list[5];
	int largest = -999999;  //Priming the input
	int smallest = 999999;
	
	cout << "Enter the elements of the array: " << endl;
	for (int i = 0; i < 5; i++){
		cout << "Element " << i+1 << ": ";
		cin >> list[i];
		
		if (list[i] > largest)
			largest = list[i];
		if (list[i] < smallest)
			smallest = list[i];
	}
	
	cout << "\nThe elements of the array are: ";
	for (int i = 0; i < 5; i++)
		cout << list[i] << " ";
	cout << endl;
	cout << "The largest element in the array is: " << largest << endl;
	cout << "The smallest element in the array is: " << smallest << endl;
	return 0;
}
