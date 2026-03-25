#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

string normalize(string s) {
    for (char &c : s) {
        c = tolower((unsigned char)c);
    }

    string cleaned = "";
    for (char c : s) {
        if (isalpha((unsigned char)c))
            cleaned += c;
    }

    sort(cleaned.begin(), cleaned.end());
    return cleaned;
}

int main() {
    vector<string> products = {"listen", "silent", "enlist", "google", "gooleg", "rat", "tar"};

    map<string, vector<string>> groups;

    for (string p : products) {
        groups[normalize(p)].push_back(p);
    }

    cout << "Grouped anagrams:\n";
    for (auto &group : groups) {
        for (string name : group.second) {
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}