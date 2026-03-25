#include <iostream>
using namespace std;

string compressString(const string &str) {
    if (str.empty()) return "";

    string result = "";
    int count = 1;

    for (int i = 1; i <= str.length(); i++) {
        if (i < str.length() && str[i] == str[i - 1]) {
            count++;
        } else {
            result += str[i - 1];
            result += to_string(count);
            count = 1;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    cout << "Compressed string: " << compressString(str) << endl;
    return 0;
}