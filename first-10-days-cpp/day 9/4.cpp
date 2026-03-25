#include <iostream>
#include <cmath>
using namespace std;

class MathOps {
public:
    static int pow(int a, int b) {
        int result = 1;
        for (int i = 0; i < b; i++) {
            result *= a;
        }
        return result;
    }

    static double pow(double a, double b) {
        return std::pow(a, b);
    }
};

class Function {
public:
    virtual double evaluate(double x) {
        return x;
    }

    virtual ~Function() {}
};

class SquareFunction : public Function {
public:
    double evaluate(double x) override {
        return x * x;
    }
};

class CubeFunction : public Function {
public:
    double evaluate(double x) override {
        return x * x * x;
    }
};

int main() {
    cout << "Compile-time polymorphism:\n";
    cout << "pow(2, 3) = " << MathOps::pow(2, 3) << endl;
    cout << "pow(2.5, 2.0) = " << MathOps::pow(2.5, 2.0) << endl;

    cout << "\nRuntime polymorphism:\n";
    Function* f1 = new SquareFunction();
    Function* f2 = new CubeFunction();

    cout << "SquareFunction evaluate(3) = " << f1->evaluate(3) << endl;
    cout << "CubeFunction evaluate(3) = " << f2->evaluate(3) << endl;

    delete f1;
    delete f2;

    return 0;
}