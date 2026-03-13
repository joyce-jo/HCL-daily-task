#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    try {
        if (n < 0) {
            throw runtime_error("Negative number entered");
        }
        cout << "You entered: " << n << endl;
    }
    catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}