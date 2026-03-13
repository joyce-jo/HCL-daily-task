#include <iostream>
using namespace std;

class MediaPlayer {
public:
    virtual void play() {
        cout << "Playing media...\n";
    }
};

class Audio : public MediaPlayer {
public:
    void play() override {
        cout << "Playing audio...\n";
    }
};

class Video : public MediaPlayer {
public:
    void play() override {
        cout << "Playing video...\n";
    }
};

int main() {
    MediaPlayer *ptr;

    Audio a;
    Video v;

    ptr = &a;
    ptr->play();

    ptr = &v;
    ptr->play();

    return 0;
}