#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string postDate;
string postTime;
double postReach;
double postEngagement;
float postDuration;
char postCategory;


int main() {
    
    cout << "Enter Post Date: ";
    getline(cin, postDate);
    
    cout << "Enter Post Time: ";
    cin >> postTime;
    
    cout << "Enter Post Reach: ";
    cin >> postReach;
    
    cout << "Enter Post Engagement: ";
    cin >> postEngagement;
    
    cout << "Enter Post Duration: ";
    cin >> postDuration;
    
    cout << "Enter Post Category: ";
    cin >> postCategory;
    
    cout << fixed << setprecision(2) << endl;
    cout << "Post Scheduled:" << endl;
    cout << "Date: " << postDate << endl;
    cout << "Time: " << postTime << endl;
    cout << "Reach: " << postReach << endl;
    cout << "Engagement: " << postEngagement << endl;
    cout << "Duration: " << postDuration << endl;
    cout << "Category: " << postCategory << endl;
    
    return 0;
}
