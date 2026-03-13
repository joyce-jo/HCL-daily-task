#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    cout << "Length = " << len << endl;

    cout << "Reversed string = ";
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    cout << "Uppercase string = " << str << endl;

    return 0;
}