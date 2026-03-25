#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    bool found = false;

    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += arr[i];
            }
        }

        if (sum == target) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Subset with given sum exists" << endl;
    else
        cout << "No subset found" << endl;

    return 0;
}