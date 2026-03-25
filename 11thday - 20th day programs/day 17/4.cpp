#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {}
};


class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};


class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};


class ShapeFactory {
public:
    static Shape* createShape(int choice) {
        if (choice == 1)
            return new Circle();
        else if (choice == 2)
            return new Rectangle();
        else
            return NULL;
    }
};

int main() {
    int choice;
    cout << "Enter choice (1: Circle, 2: Rectangle): ";
    cin >> choice;

    Shape* shape = ShapeFactory::createShape(choice);

    if (shape != NULL) {
        shape->draw();
        delete shape;
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}