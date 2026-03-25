#include <iostream>
#include <regex>
using namespace std;

int main() {
    string text = "Call me at 9876543210 or +91 9876543210 or 98765-43210 or (044) 23456789";

    regex phonePattern(R"((\+91[\s-]?)?[6-9]\d{9}|\(\d{3,4}\)[\s-]?\d{6,8}|\d{5}-\d{5})");
    sregex_iterator it(text.begin(), text.end(), phonePattern);
    sregex_iterator end;

    cout << "Phone numbers found:\n";
    while (it != end) {
        cout << it->str() << endl;
        ++it;
    }

    return 0;
}