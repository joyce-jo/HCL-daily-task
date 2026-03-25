#include <iostream>
using namespace std;

class Device {
public:
    string brand;
};

class Phone : virtual public Device {
public:
    void call() {
        cout << brand << " phone calling feature\n";
    }
};

class Camera : virtual public Device {
public:
    void clickPhoto() {
        cout << brand << " camera clicking photo\n";
    }
};

class SmartPhone : public Phone, public Camera {
public:
    void show() {
        cout << "SmartPhone Brand: " << brand << endl;
    }
};

int main() {
    SmartPhone s;
    s.brand = "Apple";

    s.show();
    s.call();
    s.clickPhoto();

    return 0;
}