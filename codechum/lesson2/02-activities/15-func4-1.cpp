#include <iostream>
using namespace std;

#define ask(var) cout << "Enter " << #var << " number: "; cin >> var;
int addNumbers(int first, int second);

int main() {
    int first, second;
    ask(first);
    ask(second);
    
    int sum = addNumbers(first, second);
    cout << "Sum of numbers: " << sum << endl;
    
    return 0;
}

int addNumbers(int first, int second) {
    return (first + second);
}
