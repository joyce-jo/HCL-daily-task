#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of tokens: ";
    cin >> n;

    string tokens[100];
    cout << "Enter tokens: ";
    for (int i = 0; i < n; i++) {
        cin >> tokens[i];
    }

    stack<int> st;

    for (int i = 0; i < n; i++) {
        string token = tokens[i];

        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else if (token == "/") st.push(a / b);
        } else {
            st.push(stoi(token));
        }
    }

    cout << "Result = " << st.top();

    return 0;
}