#include <iostream>
#include <string>
using namespace std;

string title;
string author;
int YoP;
string genre;
string lib;
string memID;
string returnDt;


int main() {
    
    cout << "Enter the book title: ";
    cin >> title;
    
    cout << "Enter the author: ";
    cin >> author;
    
    cout << "Enter the year of publication: ";
    cin >> YoP;
    
    cout << "Enter the genre: ";
    cin >> genre;
    
    cout << "Enter the library: ";
    cin >> lib;
    
    cout << "Enter your member ID: ";
    cin >> memID;
    
    cout << "Enter the return date: ";
    cin >> returnDt;
    
    cout << "You have successfully reserved the book '" << title << "' by " << author << "." << endl;
    cout << "Year of Publication: " << YoP << endl;
    cout << "Genre: " << genre << endl;
    cout << "Library: " << lib << endl;
    cout << "Member ID: " << memID << endl;
    cout << "Return Date: " << returnDt << endl;
    
    return 0;
}
