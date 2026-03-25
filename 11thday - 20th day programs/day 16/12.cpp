#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s, p;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter pattern p: ";
    cin >> p;

    vector<int> result;

    if (p.length() > s.length()) {
        cout << "No anagrams found" << endl;
        return 0;
    }

    int countP[26] = {0};
    int countS[26] = {0};

    for (int i = 0; i < p.length(); i++) {
        countP[p[i] - 'a']++;
        countS[s[i] - 'a']++;
    }

    if (equal(countP, countP + 26, countS)) {
        result.push_back(0);
    }

    for (int i = p.length(); i < s.length(); i++) {
        countS[s[i] - 'a']++;
        countS[s[i - p.length()] - 'a']--;

        if (equal(countP, countP + 26, countS)) {
            result.push_back(i - p.length() + 1);
        }
    }

    if (result.empty()) {
        cout << "No anagrams found" << endl;
    } else {
        cout << "Starting indices of anagrams: ";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
