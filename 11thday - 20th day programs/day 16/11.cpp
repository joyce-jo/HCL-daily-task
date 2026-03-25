#include <iostream>
using namespace std;

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int left = 0;
    int sum = 0;
    int maxLen = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum > k) {
            sum -= arr[left];
            left++;
        }

        int currentLen = right - left + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    cout << "Length of longest subarray: " << maxLen << endl;

    return 0;
}