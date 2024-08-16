#include <iostream>
#include <string>
using namespace std;

#define ask(var) cout << "Enter the " << #var << " string: "; getline(cin, var);
#define print(var, len) cout << "Length of the " << #var << " string: " << len << endl;
int getLen(string str);

int main() {
    string first, second;
    ask(first); ask(second);
    
    int len1, len2;
    len1 = getLen(first);
    len2 = getLen(second);
    
    print(first, len1);
    print(second, len2);
    
    cout << "Sum: " << len1 + len2 << endl;
    return 0;
}

int getLen(string str) {
    return str.length();
}