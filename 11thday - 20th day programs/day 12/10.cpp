#include <iostream>
#include <unordered_map>
using namespace std;

bool areAnagrams(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    unordered_map<char, int> freq;

    for (char c : s1)
        freq[c]++;

    for (char c : s2) {
        freq[c]--;
        if (freq[c] < 0)
            return false;
    }

    return true;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (areAnagrams(s1, s2))
        cout << "Anagrams\n";
    else
        cout << "Not anagrams\n";

    return 0;
}