#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

#define ask(var) cout << "Enter " << #var << " value: "; cin >> var;
float min(float first, float second, float third);

int main() {
    float first, second, third;
    
    ask(first);
    ask(second);
    ask(third);
    
    float minVal = min(first, second, third);
    cout << fixed << setprecision(3);
    cout << "Minimum Value: " << minVal << endl;
    
    return 0;
}

float min(float first, float second, float third) {
    
    return (min(min(first, second), third));
}
