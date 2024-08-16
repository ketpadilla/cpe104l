#include <iostream>
using namespace std;

class MediaPlayer {
  public:
  MediaPlayer() {}

  virtual void playAudio() const = 0;
  virtual void playVideo() const = 0;
};

class MP3Player : public MediaPlayer {
  public:
  MP3Player() {}

  void playAudio() const override {
    cout << "MP3Player playing audio." << endl;
  }
  
  void playVideo() const override {
    cout << "MP3Player cannot play video." << endl;
  }
};

class MP4Player : public MediaPlayer {
  public:
  MP4Player() {}

  void playAudio() const override {
    cout << "MP4Player playing audio." << endl;
  }
  
  void playVideo() const override {
    cout << "MP4Player playing video." << endl;
  }
};

class Device {
  private:
  const MediaPlayer* mediaPlayer;

  public:
  Device(const MediaPlayer* mediaPlayer) : mediaPlayer(mediaPlayer) {}

  void playAudio() const {
    mediaPlayer->playAudio();
  }

  void playVideo() const {
    mediaPlayer->playVideo();
  }
};