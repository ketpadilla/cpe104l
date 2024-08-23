#include "../src/21-2-blender.cpp"

void testCase() {
    string fruit1, fruit2;
    Blender blender;
    int test;
    
    cout << "Enter text case number: ";
    cin >> test;
    
    switch (test) {
        case 1:
            blender.blend();
            break;
        case 2:
            blender.blend("Apple", "Banana");
            break;
        case 3:
            blender.blend("Pineapple", "Grapes", 3);
            break;
    }
    
}