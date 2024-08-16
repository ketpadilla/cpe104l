#include <iostream>
#include <string>
using namespace std;

#define ask(var) cout << "Enter the " << #var << " string: "; getline(cin, var);
#define print(var, len) cout << "Length of the " << #var << " string: " << len << endl;
int getLen(string str);

int main() {
    string first, second, third, fourth, fifth;
    ask(first); ask(second); ask(third); ask(fourth); ask(fifth);
    
    int len1, len2, len3, len4, len5;
    len1 = getLen(first);
    len2 = getLen(second);
    len3 = getLen(third);
    len4 = getLen(fourth);
    len5 = getLen(fifth);
    
    print(first, len1);
    print(second, len2);
    print(third, len3);
    print(fourth, len4);
    print(fifth, len5);
    
    cout << "Result: " << (len1 + len2)/(len3 - len4) << endl;
    return 0;
}

int getLen(string str) {
    return str.length();
}