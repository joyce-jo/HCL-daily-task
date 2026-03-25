#include <iostream>
using namespace std;

int xorChecksum(int arr[], int n) {
    int checksum = 0;
    for (int i = 0; i < n; i++) {
        checksum ^= arr[i];
    }
    return checksum;
}

int main() {
    int arr[] = {1,2,3,4};
    int n = 4;

    cout << "Checksum: " << xorChecksum(arr,n);
}