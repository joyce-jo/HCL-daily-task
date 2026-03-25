#include <iostream>
#include <string>
using namespace std;

int main() {
    string pattern;
    cout << "Enter pattern: ";
    cin >> pattern;

    int n = pattern.length();
    int lps[100];

    lps[0] = 0; 

    int len = 0; 
    int i = 1;

    while (i < n) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }

    cout << "Prefix function (LPS array): ";
    for (int i = 0; i < n; i++) {
        cout << lps[i] << " ";
    }
    cout << endl;

    return 0;
}