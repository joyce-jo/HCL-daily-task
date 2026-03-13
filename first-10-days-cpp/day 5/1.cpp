#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if (!fin.is_open()) {
        cout << "Input file cannot be opened\n";
        return 1;
    }

    int arr[100], n = 0;

    while (fin >> arr[n]) {
        n++;
    }
    fin.close();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        fout << arr[i] << " ";
    }

    fout.close();
    cout << "Sorted numbers written to output.txt\n";

    return 0;
}