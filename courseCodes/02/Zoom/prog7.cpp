#include <iostream>
using namespace std;

//Create an array with 5 user-defined elements
//Obtain the number of odd and even numbers in the array

int main(){
	int list[5];
	int oddCount = 0;
	int evenCount = 0;
	
	cout << "Enter the elements of the array: " << endl;
	for (int i = 0; i < 5; i++){
		cout << "Element " << i+1 << ": ";
		cin >> list[i];
		
		if (list[i] % 2 == 0)
			evenCount++;
		else
			oddCount++;
	}
	
	cout << "\nThe elements of the array are: ";
	for (int i = 0; i < 5; i++)
		cout << list[i] << " ";
	
	cout << endl;
	cout << "There are " << oddCount << " odd numbers in the array. " << endl;
	cout << "There are " << evenCount << " even numbers in the array. " << endl;

	return 0;
}
