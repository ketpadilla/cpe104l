#include <iostream>
#include <string>
using namespace std;

#define ask(var) cout << "Enter the " << #var << " string: "; getline(cin, var);
#define print(var, len) cout << "Length of the " << #var << " string: " << len << endl;
int getLen(string str);

int main() {
    string first, second, third;
    ask(first); ask(second); ask(third);
    
    int len1, len2, len3;
    len1 = getLen(first);
    len2 = getLen(second);
    len3 = getLen(third);
    
    print(first, len1);
    print(second, len2);
    print(third, len3);
    
    cout << "Result: " << (len1 + len2)/len3 << endl;
    return 0;
}

int getLen(string str) {
    return str.length();
}