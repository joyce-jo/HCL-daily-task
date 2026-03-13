#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    int a[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter window size: ";
    cin >> k;

    deque<int> dq;

    cout << "Sliding window maximums: ";
    for (int i = 0; i < n; i++) {
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        while (!dq.empty() && a[dq.back()] < a[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        if (i >= k - 1) {
            cout << a[dq.front()] << " ";
        }
    }

    return 0;
}