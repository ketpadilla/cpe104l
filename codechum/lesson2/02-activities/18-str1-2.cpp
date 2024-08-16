#include <iostream>
#include <string>
using namespace std;

#define ask(var) cout << "Enter the " << #var << " string: "; cin >> var;

int main() {
    string first, second, third;
    
    ask(first); ask(second); ask(third);
    cout << first << " - " << second << " - " << third << endl;
    
    return 0;
}