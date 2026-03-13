#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Apple";
    string s2 = "Banana";
    string s3 = "Orange";

    string* arr[3];
    arr[0] = &s1;
    arr[1] = &s2;
    arr[2] = &s3;

    cout << "Strings are:\n";
    for (int i = 0; i < 3; i++) {
        cout << *arr[i] << endl;
    }

    return 0;
}