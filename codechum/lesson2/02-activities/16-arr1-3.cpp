#include <iostream>
using namespace std;

int main() {
    int arr[5], sum = 0, max = 5;
    
    cout << "Enter " << max << " integer numbers:" << endl;
    for (int i = 0; i < max; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    cout << "Sum: " << sum << endl;
    return 0;
}