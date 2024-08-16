#include <iostream>
#include <string>
using namespace std;

#define print(var) string str = #var; var[0] = toupper(var[0]); cout << str << ": " << var << endl;

class Person {
  private:
    string name;
    int age;
    char gender;

  public:
    Person() {}

    Person(string name, int age, char gender) : name(name), age(age), gender(gender) {}

    string getName(){
      return name;
    }

    int getAge() {
      return age;
    }

    char getGender() {
      return gender;
    }

    void setName(string name) {
      this->name = name;
    }

    void setAge(int age) {
      this->age = age;
    }

    void setGender(char gender) {
      this->gender = gender;
    }

    bool isMinor() {
      return age < 18;
    }

    string toString() {
      return name + " - " + to_string(age) + " - " + gender;
    }
};

class Father : public Person {
  public:
    Father(string name, int age) : Person(name, age, 'M') {}

    void introduceWithStyle(int n) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
          cout << " ";
        }

        cout << "I am your father" << endl;
      }
    }
};

class Son : public Father {
  public:
    Son(string name, int age) : Father(name, age) {}
    Son(int age) : Father("Unknown", age) {}

    void introduceWithStyle(int n) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
          cout << " ";
        }

        cout << "I am your son" << endl;
      }
    }
};