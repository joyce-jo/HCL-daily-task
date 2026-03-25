#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    volatile long long sum = 0;

    auto start = high_resolution_clock::now();

    for (long long i = 1; i <= 200000000; i++) {
        sum += (i * 3) / 2 + (i % 7) - (i % 5);
    }

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(end - start);

    cout << "Sum = " << sum << endl;
    cout << "Execution time = " << duration.count() << " ms" << endl;

    return 0;
}