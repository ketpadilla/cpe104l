/* // * INTRUCTIONS
  Item 1
  Write a program that prompts the user to enter their name and then prints a welcome message that includes their name.

  Sample Output
  ...

  Submitted: ...
*/

#include <iostream>
#include <string>
using namespace std;

string name;


int main() {
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Welcome, " << name << "!";
    
    return 0;
}

