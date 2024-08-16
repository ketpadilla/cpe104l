#include <iostream>
#include <string>
using namespace std;

#define ask(var) cout << "Enter the " << #var << " string: "; cin >> var;

int main() {
    string first, second;
    
    ask(first); ask(second);
    cout << first << " " << second << " " << first << endl;
    
    return 0;
}