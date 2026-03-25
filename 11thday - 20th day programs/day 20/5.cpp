#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100], result[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        result[i] = -1;
    }

    stack<int> st; 
    for (int i = 0; i < 2 * n; i++) {
        int index = i % n;

        while (!st.empty() && arr[st.top()] < arr[index]) {
            result[st.top()] = arr[index];
            st.pop();
        }

        if (i < n) {
            st.push(index);
        }
    }

    cout << "Next greater elements: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}