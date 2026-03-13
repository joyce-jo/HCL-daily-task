#include <iostream>
#include <fstream>
using namespace std;

class Employee {
public:
    int id;
    char name[50];
    float salary;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        cin.getline(name, 50);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;

    e.input();

    ofstream fout("employee.dat", ios::binary);
    fout.write((char*)&e, sizeof(e));
    fout.close();

    Employee e2;
    ifstream fin("employee.dat", ios::binary);
    fin.read((char*)&e2, sizeof(e2));
    fin.close();

    cout << "\nEmployee details read from binary file:\n";
    e2.display();

    return 0;
}