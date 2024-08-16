#include <iostream>
#include <string>
using namespace std;

class Music {
  public:
    int duration;
    string genre;

    Music() : duration(0), genre("Unknown") {}

    Music(int duration, string genre) : duration(duration), genre(genre) {}

    Music(int duration, string genre, char durationType) : duration(duration), genre(genre) {
      if (durationType == 'm') {
        this->duration = duration; 
      } else if (durationType == 'h') {
        this->duration = duration * 60;
      } else if (durationType == 'd') {
        this->duration = duration * 60 * 24;
      }
    }

    void getDuration() {
      cout << "Duration: " << duration << " minutes" << endl;
    }

    void getGenre() {
      cout << "Genre: " << genre << endl;
    }
};

void testCase() {
    int test, duration;
    string genre;
    char durationType;
    
    cout << "Enter the test case number: ";
    cin >> test;
    
    cout << "Test Case " << test << ": ";
    switch(test) {
        case 1:
            cout << "Using default constructor";
            duration = 0;
            genre = "Unknown";
            break;
        case 2:
            cout << "Using first constructor version (120, Rock)";
            duration = 120;
            genre = "Rock";
            break;
        case 3:
            cout << "Using second constructor version with hours (2h, Jazz)";
            duration = 2;
            genre = "Jazz";
            durationType = 'h';
            break;
        case 4:
            cout << "Using second constructor version with days (1d, Classical)";
            duration = 1;
            genre = "Classical";
            durationType = 'd';
            break;
        case 5:
            cout << "Using second constructor version with minutes (90m, Pop)";
            duration = 90;
            genre = "Pop";
            durationType = 'm';
            break;
    }

    cout << endl;
    if (genre.compare("Unknown")) {
        Music music(duration, genre, durationType);
        music.getDuration();
        music.getGenre();
    } else {
        Music music;
        music.getDuration();
        music.getGenre();
    }
}