#include <iostream>
using namespace std;

#define ask(var) cout << "Enter the " << #var << " score: "; cin >> var;
#define print(str) cout << str << endl

int main() {
    float first, second;
    
    ask(first);
    ask(second);
    
    bool compare = first > second;
    
    
    if (compare) {
        if (first >= 80) {
            print("Excellent!");
        } else if (first < 80) {
            print ("Good job!");
        }
    } else {
        print("Keep up the good work!");
    }
    
    
    return 0;
}