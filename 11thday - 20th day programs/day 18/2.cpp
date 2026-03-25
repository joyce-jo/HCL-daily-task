#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 0) {
        cout << "New length: 0" << endl;
        return 0;
    }

    int j = 0; 

    for (int i = 1; i < n; i++) { 
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    cout << "New length: " << j + 1 << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i <= j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}