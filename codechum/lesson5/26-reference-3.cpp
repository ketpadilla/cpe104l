#include <iostream>
#include <string>
using namespace std;

void reserveString(string* str, int length);

int main() {
  string str;
  cout << "Enter a string: "; getline(cin, str);

  reserveString(&str, str.length());
  cout << "Reversed string: " << str << endl;

  return 0;
}


void reserveString(string* str, int length) {
  for (int i = 0; i < length / 2; ++i) {
    swap((*str)[i], (*str)[length - 1 - i]); 
  }
}