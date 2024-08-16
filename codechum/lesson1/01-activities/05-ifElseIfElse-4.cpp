#include <iostream>
using namespace std;

#define ask(var) cout << "Enter " << #var << " integer: "; cin >> var;
#define print(var) cout << #var << " count: " << var << endl;

int main() {
    int first, second, third, fourth, fifth, Positive, Negative, Zero;
    ask(first);
    ask(second);
    ask(third);
    ask(fourth);
    ask(fifth);
        
    int num[5] = {first, second, third, fourth, fifth};
    
    for (int i = 0; i < 5; i++) {
        if (num[i] > 0) {
            Positive++;
        } else if (num[i] < 0) {
            Negative++;
        } else if (num[i] == 0) {
            Zero++;
        }
    }
    
    print(Positive);
    print(Negative);
    print(Zero);
    
    return 0;
}