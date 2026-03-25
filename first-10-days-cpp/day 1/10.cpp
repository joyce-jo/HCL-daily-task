#include <iostream>
using namespace std;

class DynamicArray {
    int *arr;
    int size;
    int capacity;

public:
    DynamicArray() {
        capacity = 2;
        size = 0;
        arr = new int[capacity];
    }

    void add(int value) {
        if (size == capacity) {
            capacity = capacity * 2;
            int *newArr = new int[capacity];

            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }

            delete[] arr;
            arr = newArr;
        }

        arr[size] = value;
        size++;
    }

    void display() {
        cout << "Elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "Size = " << size << endl;
        cout << "Capacity = " << capacity << endl;
    }

    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {
    DynamicArray d;

    d.add(10);
    d.add(20);
    d.display();

    d.add(30);
    d.display();

    d.add(40);
    d.add(50);
    d.display();

    return 0;
}