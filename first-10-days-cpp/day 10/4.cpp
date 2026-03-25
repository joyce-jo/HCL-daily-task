#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int convertToInt(const string &s) {
    for (char c : s) {
        if (!isdigit(c) && c != '-') {
            throw invalid_argument("Non-numeric string cannot be converted to integer");
        }
    }
    return stoi(s);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    try {
        int num = convertToInt(s);
        cout << "Integer = " << num << endl;
    }
    catch (const invalid_argument &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}