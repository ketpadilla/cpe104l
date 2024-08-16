#include <iostream>
#include <iomanip>
using namespace std;

#define ask(var, str) cout << "Enter " << #var << str << ": "; cin >> var;
#define print(var, str) cout << #var << str << ": " << var << endl;
double calculateAverageRating(double Quality, double Price, double Service);
void analyzeProductRating(char* Product, char* Category, double Quality, double Price, double Service);

int main() {
    char Product[50], Category[50];
    double Quality, Price, Service;
    
    ask(Product, " Name");
    ask(Category, "");
    ask(Quality, " Rating");
    ask(Price, " Rating");
    ask(Service, " Rating");
    
    analyzeProductRating(Product, Category, Quality, Price, Service);
    return 0;
}

double calculateAverageRating(double Quality, double Price, double Service) {
    return ((Quality + Price + Service)/3);
}

void analyzeProductRating(char* Product, char* Category, double Quality, double Price, double Service) {
    cout << fixed << setprecision(2);
    
    print(Product, " Name");
    print(Category, "");
    print(Quality, " Rating");
    print(Price, " Rating");
    print(Service, " Rating");
    
    double AvgRating = calculateAverageRating(Quality, Price, Service);
    cout << "Overall Average Rating: " << AvgRating << endl;
    
}