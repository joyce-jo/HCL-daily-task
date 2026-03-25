#include <iostream>
using namespace std;


template <class T>
class Box {
private:
    T value;

public:
    Box(T v) : value(v) {}

    void set(T v) {
        value = v;
    }

    T getValue() const {
        return value;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};


template <class T>
class Box<T*> {
private:
    T* ptr;

public:
    Box(T* p = NULL) : ptr(p) {}

    T* get() const {
        return ptr;
    }

    void reset(T* p = NULL) {
        ptr = p;
    }

    void display() const {
        if (ptr)
            cout << "Pointer value: " << *ptr << endl;
        else
            cout << "Pointer is NULL" << endl;
    }
};

int main() {
    Box<int> b1(100);
    b1.display();

    int x = 50;
    Box<int*> b2(&x);
    b2.display();

    cout << "Using get(): " << *b2.get() << endl;

    b2.reset();
    b2.display();

    return 0;
}