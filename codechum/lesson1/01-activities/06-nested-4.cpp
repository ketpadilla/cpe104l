#include <iostream>
#include <string>
using namespace std;

#define ask(var) cout << "Enter your " << #var << (string(#var) == "income" ? ": $" : ": "); cin >> var;
#define print(str) cout << str << endl

int main() {
    int age, ageLim = 60; float income, incomeLim = 10000;
    
    ask(age);
    ask(income);
    
    if (age >= ageLim && income < incomeLim) {
        print("Eligible for senior citizen discount");
    } else {
        print("Not eligible for senior citizen discount");
    }
    
    return 0;
}