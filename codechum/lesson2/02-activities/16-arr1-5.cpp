#include <iostream>
using namespace std;

int main() {
    char arr[8], vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int max = 8, counter;
    
    cout << "Enter " << max << " characters:" << endl;
    for (int i = 0; i < max; i++) {
        cin >> arr[i];
        
        for (int j = 0; j < 5; j++) {
            if (tolower(arr[i]) == vowels[j]) {
                counter++;
            }
        }
    }
    
    cout << "Number of vowel elements: " << counter << endl;
    
    return 0;
}