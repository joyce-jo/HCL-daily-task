#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int a[100], result[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        result[i] = -1;
    }

    stack<int> st;

    for (int i = 2 * n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= a[i % n]) {
            st.pop();
        }

        if (i < n) {
            if (!st.empty()) {
                result[i] = st.top();
            }
        }

        st.push(a[i % n]);
    }

    cout << "Next greater elements: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}