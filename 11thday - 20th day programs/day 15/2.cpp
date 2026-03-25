#include <iostream>
#include <sstream>
#include <string>
using namespace std;

template <typename T>
string to_string_custom(const T& value) {
    ostringstream out;
    out << value;
    return out.str();
}

template <>
string to_string_custom<string>(const string& value) {
    return "\"" + value + "\"";
}

int main() {
    int a = 25;
    double b = 3.14159;
    string c = "Joyce";

    cout << "Integer formatting: " << to_string_custom(a) << endl;
    cout << "Double formatting : " << to_string_custom(b) << endl;
    cout << "String formatting : " << to_string_custom(c) << endl;

    return 0;
}