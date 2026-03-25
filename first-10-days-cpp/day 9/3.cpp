#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle() {
        width = 1;
        height = 1;
    }

    void setWidth(double w) {
        if (w <= 0) {
            throw invalid_argument("Width must be greater than 0");
        }
        width = w;
    }

    void setHeight(double h) {
        if (h <= 0) {
            throw invalid_argument("Height must be greater than 0");
        }
        height = h;
    }

    void show() const {
        cout << "Width = " << width << ", Height = " << height << endl;
    }
};

int main() {
    Rectangle r;

    try {
        r.setWidth(10);
        r.setHeight(5);
        r.show();

        cout << "Trying invalid value...\n";
        r.setHeight(-3);   // invalid
    }
    catch (exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    // r.width = -5;   // ERROR: private member, cannot access directly

    return 0;
}