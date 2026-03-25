#include <iostream>
using namespace std;

void reverseString(string &s, int left, int right) {
    if (left >= right)
        return;

    
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;

    
    reverseString(s, left + 1, right - 1);
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    reverseString(s, 0, s.length() - 1);

    cout << "Reversed string: " << s << endl;

    return 0;
}