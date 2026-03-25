#include <iostream>
using namespace std;

template <class T>
class Matrix {
private:
    T a[2][2];

public:
    Matrix() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                a[i][j] = 0;
            }
        }
    }

    void input() {
        cout << "Enter 4 elements for 2x2 matrix:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> a[i][j];
            }
        }
    }

    void display() const {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.a[i][j] = a[i][j] + other.a[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.a[i][j] = 0;
                for (int k = 0; k < 2; k++) {
                    result.a[i][j] += a[i][k] * other.a[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    Matrix<int> m1, m2, sum, product;

    cout << "Enter first matrix:" << endl;
    m1.input();

    cout << "Enter second matrix:" << endl;
    m2.input();

    sum = m1 + m2;
    product = m1 * m2;

    cout << "\nSum of matrices:" << endl;
    sum.display();

    cout << "\nProduct of matrices:" << endl;
    product.display();

    return 0;
}