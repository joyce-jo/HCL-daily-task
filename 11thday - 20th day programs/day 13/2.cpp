#include <iostream>
using namespace std;

int toggleFourthBit(int n) {
    return n ^ (1 << 3);
}

int main() {
    int num = 10;
    cout << "Result: " << toggleFourthBit(num);
}