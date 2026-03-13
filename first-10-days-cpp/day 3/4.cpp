#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divideNum(int a, int b) {
    if (b == 0) {
        cout << "Division by zero not allowed\n";
        return 0;
    }
    return a / b;
}

int main() {
    int choice, a, b;
    int (*funcPtr)(int, int);

    do {
        cout << "\nCalculator Menu\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1:
                funcPtr = add;
                cout << "Result = " << funcPtr(a, b) << endl;
                break;
            case 2:
                funcPtr = sub;
                cout << "Result = " << funcPtr(a, b) << endl;
                break;
            case 3:
                funcPtr = mul;
                cout << "Result = " << funcPtr(a, b) << endl;
                break;
            case 4:
                funcPtr = divideNum;
                cout << "Result = " << funcPtr(a, b) << endl;
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}