#include <iostream>
using namespace std;

int recursiveFactorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * recursiveFactorial(n - 1);
}

int iterativeFactorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Recursive factorial = " << recursiveFactorial(n) << endl;
    cout << "Iterative factorial = " << iterativeFactorial(n) << endl;

    return 0;
}