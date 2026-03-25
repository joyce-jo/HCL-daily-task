#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    int left = 0;
    int right = n - 1;
    bool found = false;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "(" << arr[left] << ", " << arr[right] << ")" << endl;
            found = true;
            left++;
            right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    if (!found) {
        cout << "No pairs found" << endl;
    }

    return 0;
}