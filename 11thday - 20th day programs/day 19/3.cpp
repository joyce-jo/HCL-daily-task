#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int max(int a, int b, int c) {
    return max(max(a, b), c);
}

int maxCrossingSum(int arr[], int left, int mid, int right) {
    int sum = 0;
    int leftSum = -1000000000;
    for (int i = mid; i >= left; i--) {
        sum += arr[i];
        if (sum > leftSum)
            leftSum = sum;
    }

    sum = 0;
    int rightSum = -1000000000;
    for (int i = mid + 1; i <= right; i++) {
        sum += arr[i];
        if (sum > rightSum)
            rightSum = sum;
    }

    return leftSum + rightSum;
}

int maxSubArraySum(int arr[], int left, int right) {
    if (left == right)
        return arr[left];

    int mid = (left + right) / 2;

    return max(
        maxSubArraySum(arr, left, mid),
        maxSubArraySum(arr, mid + 1, right),
        maxCrossingSum(arr, left, mid, right)
    );
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxSubArraySum(arr, 0, n - 1);

    cout << "Maximum subarray sum is: " << result << endl;

    return 0;
}