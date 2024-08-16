#include <iostream>
using namespace std;

int main() {
    int n, lowLim = 64, idx = lowLim;
    
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = (lowLim + 1); j <= (lowLim + i); j++) {
            cout << char(j) << " ";
            idx++;
        }
        
        lowLim = idx;
        cout << endl;
    }
    
    return 0;
}