#include <iostream>
#include <future>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num = 5;

    future<int> result = async(launch::async, factorial, num);

    cout << "Calculating factorial asynchronously..." << endl;

    cout << "Factorial of " << num << " is: " << result.get() << endl;

    return 0;
}