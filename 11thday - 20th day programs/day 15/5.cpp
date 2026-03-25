#include <iostream>
#include <type_traits>
#include <string>
using namespace std;

template <class T>
class Demo {
    static_assert(is_arithmetic<T>::value,
                  "Error: T must be a numeric type. std::string is not allowed.");

private:
    T value;

public:
    Demo(T v) : value(v) {}

    T add(T other) {
        return value + other;
    }

    T multiply(T other) {
        return value * other;
    }
};

int main() {
    Demo<int> a(5);
    cout << "Int Addition: " << a.add(3) << endl;
    cout << "Int Multiplication: " << a.multiply(4) << endl;

    Demo<double> b(2.5);
    cout << "Double Addition: " << b.add(1.5) << endl;
    cout << "Double Multiplication: " << b.multiply(2.0) << endl;

    Demo<float> c(1.2f);
    cout << "Float Addition: " << c.add(2.3f) << endl;
    cout << "Float Multiplication: " << c.multiply(3.0f) << endl;


    return 0;
}