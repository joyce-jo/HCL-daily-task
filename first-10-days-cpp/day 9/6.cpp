#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;
    int** pp = &p;

    cout << "Before: " << x << endl;

    **pp = 50;

    cout << "After: " << x << endl;

    return 0;
}