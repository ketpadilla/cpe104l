#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var, str) cout << "Enter " << #var << " " << str << ": "; cin >> var;
#define print(var, str) cout << #var << " " << str << ": " << var << endl;
void displayBillDetails(char* Customer, float Units, float Rate);
void calculateBill(float Units, float Rate);

int main() {
    char Customer[50];
    float Units, Rate;
    
    ask(Customer, "Name");
    ask(Units, "Consumed");
    ask(Rate, "Per Unit");
    
    displayBillDetails(Customer, Units, Rate);
    calculateBill(Units, Rate);
    
    return 0;
}

void displayBillDetails(char* Customer, float Units, float Rate) {
    cout << fixed << setprecision(2);
    print(Customer, "Name");
    print(Units, "Consumed");
    print(Rate, "Per Unit");
    
}

void calculateBill(float Units, float Rate) {
    cout << fixed << setprecision(2);
    cout << "Bill Amount: " << Units * Rate << endl;
    cout << "Thank you for using our services!" << endl;
}