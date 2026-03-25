#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    int need[256] = {0};
    int have[256] = {0};

    for (int i = 0; i < t.length(); i++) {
        need[(unsigned char)t[i]]++;
    }

    int required = t.length();
    int left = 0;
    int minLen = INT_MAX;
    int start = 0;

    for (int right = 0; right < s.length(); right++) {
        char ch = s[right];

        if (need[(unsigned char)ch] > 0) {
            have[(unsigned char)ch]++;
            if (have[(unsigned char)ch] <= need[(unsigned char)ch]) {
                required--;
            }
        }

        while (required == 0) {
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;
            }

            char leftChar = s[left];

            if (need[(unsigned char)leftChar] > 0) {
                have[(unsigned char)leftChar]--;
                if (have[(unsigned char)leftChar] < need[(unsigned char)leftChar]) {
                    required++;
                }
            }

            left++;
        }
    }

    if (minLen == INT_MAX) {
        cout << "No such substring exists" << endl;
    } else {
        cout << "Smallest substring: " << s.substr(start, minLen) << endl;
    }

    return 0;
}