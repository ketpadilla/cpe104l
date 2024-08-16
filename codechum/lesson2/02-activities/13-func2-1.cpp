#include <iostream>
using namespace std;

int addNumbers();

int main() {
    int sum = addNumbers();
    cout << "Sum of numbers: " << sum << endl;
    
    return 0;
}

int addNumbers() {
    int num[2] = {5, 10};
    
    return (num[0] + num[1]);
}
