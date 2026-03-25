#include <iostream>
using namespace std;

struct Employee {
    struct Address {
        string street;
        string city;
        string pincode;
    };

    int empId;
    string name;
    float salary;
    Address addr;
};

int main() {
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.empId;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, e.name);

    cout << "Enter Salary: ";
    cin >> e.salary;
    cin.ignore();

    cout << "Enter Street: ";
    getline(cin, e.addr.street);

    cout << "Enter City: ";
    getline(cin, e.addr.city);

    cout << "Enter Pincode: ";
    getline(cin, e.addr.pincode);

    cout << "\nEmployee Details:\n";
    cout << "ID: " << e.empId << endl;
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary << endl;
    cout << "Street: " << e.addr.street << endl;
    cout << "City: " << e.addr.city << endl;
    cout << "Pincode: " << e.addr.pincode << endl;

    return 0;
}