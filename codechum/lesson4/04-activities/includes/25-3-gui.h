#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class InputElement {
  protected:
    int maxLength;
    string value;
  
  public:
    InputElement(int maxLength) : maxLength(maxLength) {}

    string getValue() const {
      return value;
    }

    void setValue(char c) {
      int end = value.size();

      if (c == '/') {
        value.pop_back();
      } else {
        value.push_back(c);
      }
    }

    virtual bool validate() const {
      int valSize = value.size();

      if (valSize >= 1 && valSize <= maxLength) {
        return true;
      }

      return false;
    }
};

class PasswordInputElement : public InputElement {
  private:
    vector<char> allowedCharacters;
  
  public:
    PasswordInputElement(int maxLength, const vector<char>& allowedCharacters) : InputElement(maxLength), allowedCharacters(allowedCharacters) {}

    bool validate() const override {
      for (size_t i = 0; i < value.size(); ++i) {
        char c = value[i];
        if (find(allowedCharacters.begin(), allowedCharacters.end(), c) == allowedCharacters.end()) {
          return false;
        }
      }

      return InputElement::validate();
    }
};

class CustomPasswordInputElement : public PasswordInputElement {
  private:
    static const vector<char> BEfAULT_ALLOWED_CHARACTERS;

  public:
    CustomPasswordInputElement(int maxLength) : PasswordInputElement(maxLength, {'J', 'r', 'v', 'D'}) {}
};

class PasswordField {
  public:
    void validate(const string& password, PasswordInputElement& passwordInputElement) {
      for (size_t i = 0; i < password.size(); ++i) {
        passwordInputElement.setValue(password[i]);
      }

      bool result = passwordInputElement.validate();
      cout << "Password validation result: " << (result ? "true" : "false") << endl;
    }
};