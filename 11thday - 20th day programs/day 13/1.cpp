#include <iostream>
using namespace std;

int setThirdBit(int n) {
    return n | (1 << 2);
}

int main() {
    int num = 5;
    cout << "Result: " << setThirdBit(num);
}