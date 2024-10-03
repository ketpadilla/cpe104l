/* // * TASK
  Create a program where the user enters a sequence of numbers
    and counts the number of even and odd numbers inputted.
    End the program when the user inputs -999
*/

#include <iostream>
using namespace std;

int main() {
  int sentinel = -999, oddCounter = 0 , evenCounter = 0, num = 0;

  system("clear");
  cout << "ENTER A SEQUENCE ON NUMBERS" << endl
    << "(Enter -999 to exit)" << endl;

  cout << ":: "; cin >> num;
  while (num != sentinel) {
    if (num % 2 == 0) evenCounter++;
    else oddCounter++;
    
    cout << ":: "; cin >> num;
  }

  cout << endl 
    << "Number of even numbers: " << evenCounter << endl
    << "Number of odd numbers: " << oddCounter << endl
    << endl;

  return 0;
}