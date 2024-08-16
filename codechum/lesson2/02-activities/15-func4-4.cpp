#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var) cout << "Enter the " << #var << ": "; cin >> var;
double calculatePercentage(double value, double total);

int main() {
    double value, total;
    
    ask(value);
    ask(total);

    double per = calculatePercentage(value, total);
    cout << fixed << setprecision(2);
    cout << per << "% of "<< total << " is " << value << endl;
    
    return 0;
}

double calculatePercentage(double value, double total) {
    
    return (value / total * 100);
}
