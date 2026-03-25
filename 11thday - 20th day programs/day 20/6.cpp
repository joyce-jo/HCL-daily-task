#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int price[100], span[100];
    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    stack<int> st; 

    for (int i = 0; i < n; i++) {
        while (!st.empty() && price[st.top()] <= price[i]) {
            st.pop();
        }

        if (st.empty()) {
            span[i] = i + 1;
        } else {
            span[i] = i - st.top();
        }

        st.push(i);
    }

    cout << "Stock spans: ";
    for (int i = 0; i < n; i++) {
        cout << span[i] << " ";
    }
    cout << endl;

    return 0;
}