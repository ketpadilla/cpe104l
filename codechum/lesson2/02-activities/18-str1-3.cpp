#include <iostream>
#include <string>
using namespace std;

#define ask(var) cout << "Enter the name of your " << #var << " character: "; getline(cin, var);

int main() {
    string first, second, third, fourth;
    
    ask(first); ask(second); ask(third); ask(fourth);
    cout << "My most played characters in the game are " << first << ", " << second << ", " << third << ", and " << fourth << "." << endl;
    
    return 0;
}