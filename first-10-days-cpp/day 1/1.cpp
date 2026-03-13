#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    if (password.length() > 8) {
        cout << "Valid: Length is greater than 8";
    } else {
        cout << "Invalid: Length is not greater than 8";
    }

    return 0;
}