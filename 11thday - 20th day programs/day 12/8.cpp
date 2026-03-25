#include <iostream>
#include <regex>
using namespace std;

bool isValidEmail(const string &email) {
    regex pattern(R"(^[A-Za-z][A-Za-z0-9._%+-]*@[A-Za-z0-9.-]+\.[A-Za-z]{2,}$)");
    return regex_match(email, pattern);
}

int main() {
    string email;
    cout << "Enter email: ";
    cin >> email;

    if (isValidEmail(email))
        cout << "Valid email\n";
    else
        cout << "Invalid email\n";

    return 0;
}