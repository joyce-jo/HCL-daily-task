#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    cout << "Before modification: " << x << endl;

    **pp = 50;

    cout << "After modification: " << x << endl;

    return 0;
}