#include <iostream>
using namespace std;

struct Order {
    int orderId;
    string productName;
    int quantity;
    float price;
};

struct Customer {
    int customerId;
    string customerName;
    Order order;
};

int main() {
    Customer c;

    cout << "Enter customer ID: ";
    cin >> c.customerId;
    cin.ignore();

    cout << "Enter customer name: ";
    getline(cin, c.customerName);

    cout << "Enter order ID: ";
    cin >> c.order.orderId;
    cin.ignore();

    cout << "Enter product name: ";
    getline(cin, c.order.productName);

    cout << "Enter quantity: ";
    cin >> c.order.quantity;

    cout << "Enter price: ";
    cin >> c.order.price;

    cout << "\n--- Complete Order Details ---\n";
    cout << "Customer ID   : " << c.customerId << endl;
    cout << "Customer Name : " << c.customerName << endl;
    cout << "Order ID      : " << c.order.orderId << endl;
    cout << "Product Name  : " << c.order.productName << endl;
    cout << "Quantity      : " << c.order.quantity << endl;
    cout << "Price         : " << c.order.price << endl;
    cout << "Total Amount  : " << c.order.quantity * c.order.price << endl;

    return 0;
}