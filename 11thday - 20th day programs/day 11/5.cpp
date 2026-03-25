#include <iostream>
using namespace std;

class Demo {
private:
    const int value;

public:
    Demo(int v) : value(v) {}

    void setValue(int newValue) {
        int* ptr = const_cast<int*>(&value); 
        *ptr = newValue;
    }

    void show() const {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Demo d(10);
    d.show();

    d.setValue(50); 
    d.show();

    return 0;
}