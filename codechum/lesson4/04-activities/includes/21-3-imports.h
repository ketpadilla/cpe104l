#include "../src/21-3-student.cpp"

void testCase() {
    
    string name, course;
    int idNumber, test;
    Student student;
    
    cout << "Enter text case number: ";
    cin >> test;
    
    switch (test) {
        case 1:
            name = "John Doe";
            course = "Computer Science";
            idNumber = 123456789;
            break;
        case 2:
            name = "Jane Doe";
            course = "Mathematics";
            idNumber = 12345;
            break;
        case 3:
            name = "Alice123";
            course = "Physics";
            idNumber = 987654321;
            break;
        case 4:
            name = "Jane Doe";
            course = "Mathematics";
            idNumber = 123456789;
            break;
    }
    student.setData(idNumber, name, course);
    
    if (test == 1 || test == 2) {
        cout << student.toString() << endl;
    } else if (test == 3 || test == 4) {
        student.validateInfo();
    }
    
}