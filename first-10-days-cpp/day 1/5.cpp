#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "a AND b = " << (a & b) << endl;
    cout << "a OR b  = " << (a | b) << endl;
    cout << "a XOR b = " << (a ^ b) << endl;
    cout << "a left shift by 1 = " << (a << 1) << endl;
    cout << "a right shift by 1 = " << (a >> 1) << endl;
    cout << "b left shift by 1 = " << (b << 1) << endl;
    cout << "b right shift by 1 = " << (b >> 1) << endl;

    return 0;
}