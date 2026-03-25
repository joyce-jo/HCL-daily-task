#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s = {101, "Joyce", 89.5};
    Student *ptr = &s;

    cout << "Access using pointer:\n";
    cout << "Roll No: " << ptr->rollNo << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Marks: " << ptr->marks << endl;

    return 0;
}