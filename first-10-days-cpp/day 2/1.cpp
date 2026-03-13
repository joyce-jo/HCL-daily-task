#include <iostream>
using namespace std;

class Order {
    struct Item {
        int id;
        int quantity;
    };

    Item items[9];
    int count;

public:
    Order() {
        count = 0;
    }

    void addItem(int id, int quantity) {
        if (count < 9) {
            items[count].id = id;
            items[count].quantity = quantity;
            count++;
        } else {
            cout << "Order is full. Cannot add more than 9 items.\n";
        }
    }

    void show() {
        cout << "\nOrder Details:\n";
        for (int i = 0; i < count; i++) {
            cout << "Item " << i + 1 << " -> ID: " << items[i].id
                 << ", Quantity: " << items[i].quantity << endl;
        }
    }
};

int main() {
    Order o;

    o.addItem(101, 2);
    o.addItem(102, 5);
    o.addItem(103, 1);

    o.show();

    return 0;
}