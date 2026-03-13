#include <iostream>
using namespace std;

struct Compartment {
    int count;
    Compartment* prev;
    Compartment* next;

    Compartment(int c) {
        count = c;
        prev = NULL;
        next = NULL;
    }
};

class Train {
    Compartment* head;
    Compartment* tail;

public:
    Train() {
        head = tail = NULL;
    }

    void addFront(int c) {
        Compartment* newNode = new Compartment(c);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void addEnd(int c) {
        Compartment* newNode = new Compartment(c);

        if (tail == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayForward() {
        Compartment* temp = head;
        cout << "Forward: ";
        while (temp != NULL) {
            cout << temp->count << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void displayBackward() {
        Compartment* temp = tail;
        cout << "Backward: ";
        while (temp != NULL) {
            cout << temp->count << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    Train t;

    t.addFront(100);
    t.addEnd(120);
    t.addEnd(140);
    t.addFront(80);

    t.displayForward();
    t.displayBackward();

    return 0;
}