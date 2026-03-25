#include <iostream>
#include <type_traits>
using namespace std;

template <typename T>
class Demo {
private:
    T value;

public:
    Demo(T v) : value(v) {
        static_assert(
            is_same<decltype(v + v), T>::value &&
            is_same<decltype(v * v), T>::value,
            "T must support + and * and both must return T"
        );
    }

    T add(T other) {
        return value + other;
    }

    T multiply(T other) {
        return value * other;
    }
};

int main() {
    Demo<int> d1(5);
    cout << "Addition: " << d1.add(3) << endl;
    cout << "Multiplication: " << d1.multiply(4) << endl;

    Demo<double> d2(2.5);
    cout << "Addition: " << d2.add(1.5) << endl;
    cout << "Multiplication: " << d2.multiply(2.0) << endl;

    return 0;
}