#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

#define askVAR(var) cout << "Enter the " << #var << ": "; cin >> var;

string recipient, message, name, subject, code, location, compName, website, phone, jobTitle, department;
double version, discount;
short age;
char status;

int main() {
    askVAR(recipient);
    askVAR(message);
    askVAR(name);
    askVAR(subject);
    askVAR(version);
    askVAR(discount);
    askVAR(status);
    askVAR(code);
    askVAR(location);
    askVAR(age);
    
    cout << "Enter the company name: ";
    cin >> compName;
    
    askVAR(website);
    askVAR(phone);
    
    cout << "Enter the job title: ";
    cin >> jobTitle;
    
    askVAR(department);
    
    cout << "Dear " << recipient << ", I hope this email finds you well." << endl;
    cout << message << endl;
    cout << "Subject: " << subject << endl;
    cout << "Sender: " << name << endl;
    cout << "Version: " << fixed << setprecision(1) << version << endl;
    cout << "Discount: " << fixed << setprecision(2) << discount << "%" << endl;
    cout << "Status: " << status << endl;
    cout << "Code: " << code << endl;
    cout << "Location: " << location << endl;
    cout << "Age: " << age << endl;
    cout << "Company: " << compName << endl;
    cout << "Website: " << website << endl;
    cout << "Phone: " << phone << endl;
    cout << "Job Title: " << jobTitle << endl;
    cout << "Department: " << department << endl;
    
    
    return 0;
}