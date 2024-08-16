#include <iostream>
#include <iomanip>
using namespace std;

void convertTemperature();

int main() {
    convertTemperature();
    
    return 0;
}

void convertTemperature() {
    double Celc;
    
    cout << "Enter the temperature in Celsius: ";
    cin >> Celc;
;
    
    double Fahr = (Celc * 9/5) + 32;
    
    cout << fixed << setprecision(2);
    cout << "Temperature in Fahrenheit: " << Fahr << endl;
}


