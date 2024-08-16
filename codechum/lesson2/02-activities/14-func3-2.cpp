#include <iostream>
using namespace std;

#define ask(var) cout << "Enter " << #var << " integer: "; cin >> var;
void sumOfIntegers(int first, int second, int third);

int main() {
    int first, second, third;
    
    ask(first);
    ask(second);
    ask(third);
    
    sumOfIntegers(first, second, third);
    
    return 0;
}

void sumOfIntegers(int first, int second, int third) {
    cout << (first + second + third) << endl;
    
}
