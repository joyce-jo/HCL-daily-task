#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, pattern;

    cout << "Enter text: ";
    cin >> text;

    cout << "Enter pattern: ";
    cin >> pattern;

    bool found = false;

    for (int i = 0; i <= text.length() - pattern.length(); i++) {
        int j;
        for (j = 0; j < pattern.length(); j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        if (j == pattern.length()) {
            found = true;
            cout << "Pattern found at index " << i << endl;
        }
    }

    if (!found) {
        cout << "Pattern not found" << endl;
    }

    return 0;
}