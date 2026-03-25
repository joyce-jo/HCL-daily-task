#include <iostream>
using namespace std;

void reverseArray(int a[], int start, int end) {
    while (start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;
    cout << "Enter size: ";
    cin >> n;

    int a[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter k: ";
    cin >> k;

    k = k % n;

    reverseArray(a, 0, n - 1);
    reverseArray(a, 0, k - 1);
    reverseArray(a, k, n - 1);

    cout << "Array after right rotation: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}