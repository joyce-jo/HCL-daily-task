#include <iostream>
using namespace std;

class CircularQueue {
    int arr[5];
    int front, rear, count, size;

public:
    CircularQueue() {
        front = 0;
        rear = -1;
        count = 0;
        size = 5;
    }

    void enqueue(int x) {
        if (count == size) {
            cout << "Queue is full\n";
            return;
        }
        rear = (rear + 1) % size;
        arr[rear] = x;
        count++;
    }

    void dequeue() {
        if (count == 0) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Deleted: " << arr[front] << endl;
        front = (front + 1) % size;
        count--;
    }

    void display() {
        if (count == 0) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % size] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();

    q.dequeue();
    q.dequeue();

    q.enqueue(60);
    q.enqueue(70); // wrap around
    q.display();

    return 0;
}