#include <iostream>
#include <type_traits>
#include <string>

using namespace std;

template <class T>
struct Vector2 {
    static_assert(std::is_arithmetic<T>::value,
                  "Vector2<T> requires a numeric type (int, float, double, etc.)");

    T x, y;

    Vector2() : x(), y() {}
    Vector2(T xVal, T yVal) : x(xVal), y(yVal) {}

    Vector2 operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }

    Vector2 operator*(T scalar) const {
        return Vector2(x * scalar, y * scalar);
    }
};

template <class T>
ostream& operator<<(ostream& os, const Vector2<T>& v) {
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}

int main() {
    Vector2<int> vi1(2, 3), vi2(1, 4);
    cout << "int + : " << (vi1 + vi2) << endl;
    cout << "int - : " << (vi1 - vi2) << endl;
    cout << "int * : " << (vi1 * 2) << endl << endl;

    Vector2<float> vf1(1.5f, 2.5f), vf2(0.5f, 1.0f);
    cout << "float + : " << (vf1 + vf2) << endl;
    cout << "float - : " << (vf1 - vf2) << endl;
    cout << "float * : " << (vf1 * 2.0f) << endl << endl;

    Vector2<double> vd1(1.11, 2.22), vd2(3.33, 4.44);
    cout << "double + : " << (vd1 + vd2) << endl;
    cout << "double - : " << (vd1 - vd2) << endl;
    cout << "double * : " << (vd1 * 0.5) << endl;


    return 0;
}