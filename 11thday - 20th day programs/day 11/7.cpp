#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }

    virtual ~Shape() {
        cout << "Shape destructor" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }

    void radius() {
        cout << "Circle specific function" << endl;
    }

    ~Circle() {
        cout << "Circle destructor" << endl;
    }
};

int main() {
    Shape* s = new Circle();

    Circle* c = dynamic_cast<Circle*>(s);

    if (c) {
        cout << "Downcast successful" << endl;
        c->draw();
        c->radius();
    } else {
        cout << "Downcast failed" << endl;
    }

    delete s;
    return 0;
}