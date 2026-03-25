#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "Target found at position " << pos;
    else
        cout << "Target not found";

    return 0;
}