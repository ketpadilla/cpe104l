/* // * TASK
  Write the definitions of the functions of the class orderedArrayList
  and write a program that tests the functions on the following data input: 
    21 10 56 43 78 11 20 18
*/

#include <iostream>
#include <sstream>
#include "includes/orderedArrayList.h"
using namespace std;
 
int main() {
    //! ABSTRACT THEN FIX SORTING IMPLEMENTATION
    orderedArrayList list(8);
    string input;
    int num, repItem, loc;

    system("clear");
    cout << "ENTER 8 INTEGERS " // ask for input 
    << endl << "(Separate with spaces)"
    << endl << endl << ":: ";
    getline(cin, input);

    int i = 0;
    stringstream s(input);
    while (s >> num) {
        list.insert(num);    
    }

    cout << endl;
    list.print();

    cout << endl 
        << "Replace an integer" << endl
        << ":: Location [1-7]: ";
    cin >> loc;

    cout << ":: Integer: ";
    cin >> repItem;
    list.replaceAt((loc - 1), repItem);

    cout << "NEW ";
    list.print();

	return 0;   
}
