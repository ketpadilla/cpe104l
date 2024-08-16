#include <iostream>
#include <vector>

using namespace std;

int main() {
    int number;
    vector<int> factors;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    int factor = 1;
    
    do {
        if (number % factor == 0){
            factors.push_back(factor);
        }
        
        factor++;
        
    } while (factor <= number);

    cout << "Factors of " << number << ": ";
    for (int i = 0; i < factors.size(); i++) {
        cout << factors[i] << " ";
    }
    
    return 0;
} 