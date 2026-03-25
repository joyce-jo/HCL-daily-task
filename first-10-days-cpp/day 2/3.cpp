#include <iostream>
#include <initializer_list>
using namespace std;

class Matrix {
    int rows, cols;
    int **data;

public:
    // Constructor with rows and cols
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                data[i][j] = 0;
            }
        }
    }

    // Constructor using initializer_list
    Matrix(initializer_list<initializer_list<int>> list) {
        rows = list.size();
        cols = list.begin()->size();

        data = new int*[rows];
        int i = 0;
        for (auto row : list) {
            data[i] = new int[cols];
            int j = 0;
            for (auto val : row) {
                data[i][j++] = val;
            }
            i++;
        }
    }

    void show() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
        cout << "Memory freed by destructor\n";
    }
};

int main() {
    cout << "Matrix 1:\n";
    Matrix m1(2, 3);
    m1.show();

    cout << "\nMatrix 2:\n";
    Matrix m2 = {{1, 2, 3}, {4, 5, 6}};
    m2.show();

    return 0;
}