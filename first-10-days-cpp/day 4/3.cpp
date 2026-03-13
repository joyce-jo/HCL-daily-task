#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter bracket string: ";
    cin >> s;

    stack<char> st;
    bool balanced = true;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) {
                balanced = false;
                break;
            }

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                balanced = false;
                break;
            }
        }
    }

    if (!st.empty()) {
        balanced = false;
    }

    if (balanced)
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}