#include <iostream>
using namespace std;

class Test {
    string name;
public:
    Test(string n) : name(n) {
        cout << "Constructor: " << name << endl;
    }
    ~Test() {
        cout << "Destructor: " << name << endl;
    }
};

int main() {
    try {
        Test a("A");

        {
            Test b("B");

            {
                Test c("C");
                throw runtime_error("Exception occurred");
            }
        }
    }
    catch (const exception &e) {
        cout << "Caught: " << e.what() << endl;
    }

    return 0;
}