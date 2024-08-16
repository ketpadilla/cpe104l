#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

class Student {
public:
    int idNumber;
    string name;
    string course;
    
    Student() {}
    
    void setData(int idNumber, string name, string course) {
      this->idNumber = idNumber;
      this->name = name;
      this->course = course;
    }
    
    string toString() {
        return to_string(idNumber) + " - " + name + " - " + course;
    }
    
    void validateInfo() {
        if (checkID(idNumber) || checkName(name)) {
            cout << "Student information is not valid.";
        } else {
            cout << "Student information is valid.";
        }
    }
    
    bool checkID(int idNumber) {
        int copyID = idNumber;
        for (int i = 0; i < 9; i++) {
            if (copyID == 0) {
                return true;
            }
            
            copyID /= 10;
        }
        
        if (copyID != 0) {
            return true;
        }
        
        return false;
    }
    
    bool checkName(string name) {
        for (int i = 0; i < name.length(); i++) {
            if (!isalpha(name[i]) && !(name[i] == ' ')) {
                return true;
            }
        }
        
        return false;
    }
};