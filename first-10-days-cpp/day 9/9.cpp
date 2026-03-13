#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }

    ~Demo() {
        cout << "Destructor called\n";
    }
};

int main() {
    Demo* d = new Demo();

    delete d;

    return 0;
}