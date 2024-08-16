#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float arr[5], total = 0, avg;
    int max = 10;
    
    cout << "Enter " << max << " floating-point numbers:" << endl;
    for (int i = 0; i < max; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    
    cout << fixed << setprecision(2);
    cout << "The average is: " << total/max << endl;
    
    return 0;
}