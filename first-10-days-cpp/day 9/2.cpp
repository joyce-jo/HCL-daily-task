#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Media {
public:
    virtual void play() {
        cout << "Playing media\n";
    }

    virtual ~Media() {
        cout << "Media destructor called\n";
    }
};

class Audio : public Media {
public:
    void play() override {
        cout << "Playing audio\n";
    }

    ~Audio() {
        cout << "Audio destructor called\n";
    }
};

class Video : public Media {
public:
    void play() override {
        cout << "Playing video\n";
    }

    ~Video() {
        cout << "Video destructor called\n";
    }
};

int main() {
    vector<unique_ptr<Media>> items;

    items.push_back(make_unique<Audio>());
    items.push_back(make_unique<Video>());
    items.push_back(make_unique<Audio>());

    cout << "Runtime polymorphism:\n";
    for (auto& item : items) {
        item->play();
    }

    cout << "Program ending, destructors will be called automatically:\n";
    return 0;
}