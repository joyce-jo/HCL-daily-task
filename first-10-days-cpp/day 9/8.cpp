#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;
    float marks;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* s = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        s[i].input();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    delete[] s;

    return 0;
}