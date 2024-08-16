#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var) cout << "Enter the value of " << #var << ": "; cin >> var;
float sum(float N); //! ask if int sum(int) is the correct requirement

int main() {
    int N;
    ask(N);
    
    float res = sum(N);

    cout << fixed << setprecision(2);
    cout << "Sum: " << res << endl;
    
    return 0;
}

float sum(float n) {
    if (n == 0) 
        return 0;
    return (n / 10) + sum(n - 1);
}