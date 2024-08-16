#include <iostream>
using namespace std;

int main() {
    int num[25], max = 25, size = 5;
    
    for (int i = 0; i < max; i++) {
        num[i] = i + 1;
    }
    
    int curr = 0, k = curr;
    for (int j = 0; j < size; j++) {
        for (k = curr; k < size + curr; k++) {
            cout << num[k] << "\t";
        }
        
        curr += size;
        cout << endl;
    }
    
    
    return 0;
}