#include <iostream>
using namespace std;

class Person {
protected:
    int id;
    string name;
    string dept;

public:
    void getDetails() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, dept);
    }

    void displayDetails() {
        cout << "\nID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
    }
};

int main() {
    Person p;
    p.getDetails();
    p.displayDetails();

    return 0;
}