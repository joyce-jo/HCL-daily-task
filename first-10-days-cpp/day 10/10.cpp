#include <iostream>
#include <list>
#include <vector>
using namespace std;

int evalRPN(vector<string> tokens) {
    list<int> st;

    for (string token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = st.back(); st.pop_back();
            int a = st.back(); st.pop_back();

            if (token == "+") st.push_back(a + b);
            else if (token == "-") st.push_back(a - b);
            else if (token == "*") st.push_back(a * b);
            else st.push_back(a / b);
        }
        else {
            st.push_back(stoi(token));
        }
    }

    return st.back();
}

int main() {
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << "Result = " << evalRPN(tokens) << endl;
    return 0;
}