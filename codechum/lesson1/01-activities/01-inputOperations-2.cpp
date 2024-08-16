/* // * INTRUCTIONS
  Item 2
  ...

  Submitted: ...
*/

#include <iostream>
#include <string>
using namespace std;

string name;
int age;
string city;


int main() {
    
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your city: ";
    cin.ignore();
    getline(cin, city);
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    
    return 0;
}
