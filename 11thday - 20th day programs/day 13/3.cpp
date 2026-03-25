#include <iostream>
using namespace std;

char toUpperCase(char ch) {
    if (ch >= 'a' && ch <= 'z')
        return ch & '_';
    return ch;
}

int main() {
    char c = 'b';
    cout << toUpperCase(c);
}