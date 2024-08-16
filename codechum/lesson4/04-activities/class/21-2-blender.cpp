#include <iostream>
#include <string>
using namespace std;

class Blender {
    public:
    
        Blender() {}
        
        void blend() {
            cout << "There's nothing to blend here, boss." << endl;
        }
        
        void blend(string fruit1, string fruit2) {
            cout << "Blending " << fruit1 << " and " << fruit2 << ", boss." << endl;
        }
        
        void blend(string fruit1, string fruit2, int n) {
            for (int i = 0; i < n; i++) {
                blend(fruit1, fruit2);
            }
        }
};