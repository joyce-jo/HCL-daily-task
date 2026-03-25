#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "Salary cannot be negative";
    }
};

int main() {
    double salary;
    cout << "Enter salary: ";
    cin >> salary;

    try {
        if (salary < 0) {
            throw MyException();
        }
        cout << "Salary = " << salary << endl;
    }
    catch (const MyException &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}