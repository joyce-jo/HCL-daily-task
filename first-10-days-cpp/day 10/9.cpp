#include <iostream>
#include <list>
using namespace std;

bool isBalanced(string s) {
    list<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push_back(ch);
        }
        else {
            if (st.empty()) return false;

            char top = st.back();
            st.pop_back();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s = "({[]})";

    if (isBalanced(s))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}