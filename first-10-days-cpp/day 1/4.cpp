#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    bool isPalindrome = true;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "Palindrome";
    } else {
        cout << "Not a palindrome";
    }

    return 0;
}