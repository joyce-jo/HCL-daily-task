#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color c = GREEN;

    int value = static_cast<int>(c);

    cout << "Enum value as int = " << value << endl;

    return 0;
}