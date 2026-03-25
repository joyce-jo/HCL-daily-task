#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        ifstream fin("numbers.txt");

        if (!fin.is_open()) {
            throw "File opening error";
        }

        int a, b;
        fin >> a >> b;
        fin.close();

        if (b == 0) {
            throw "Division by zero error";
        }

        cout << "Result = " << a / b << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}