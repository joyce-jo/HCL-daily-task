#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle() {
        width = 0;
        height = 1;
    }

    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        if (h <= 0) {
            throw invalid_argument("Height must be positive");
        }
        height = h;
    }

    void show() {
        cout << "Width = " << width << ", Height = " << height << endl;
    }
};

int main() {
    Rectangle r;

    try {
        r.setWidth(10);
        r.setHeight(5);
        r.show();

        cout << "Trying invalid height...\n";
        r.setHeight(-3);
    }
    catch (exception &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}