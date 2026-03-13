#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        ifstream file("numbers.txt");
        if (!file) {
            throw runtime_error("File error: cannot open file");
        }

        int a, b;
        file >> a >> b;

        if (file.fail()) {
            throw runtime_error("File error: unable to read numbers");
        }

        if (b == 0) {
            throw runtime_error("Math error: division by zero");
        }

        cout << "Result = " << a / b << endl;
    }
    catch (const exception &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}