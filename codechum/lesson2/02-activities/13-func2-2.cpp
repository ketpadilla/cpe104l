#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var) cout << "Enter the " << #var << " number: "; cin >> var;
float calculateAverage();

int main() {
    float ave = calculateAverage();
    cout << fixed << setprecision(2);
    cout << "The average of the three numbers is: " << ave << endl;
    
    return 0;
}

float calculateAverage() {
    float first, second, third;
    
    ask(first);
    ask(second);
    ask(third);
    
    return ((first+second+third)/3);
}
