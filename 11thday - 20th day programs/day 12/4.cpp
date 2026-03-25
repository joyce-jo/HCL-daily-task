#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s;

    ofstream fout("students.dat", ios::binary);
    for (int i = 0; i < n; i++) {
        cout << "\nEnter Roll No: ";
        cin >> s.rollNo;
        cout << "Enter Name: ";
        cin >> ws;
        cin.getline(s.name, 50);
        cout << "Enter Marks: ";
        cin >> s.marks;

        fout.write((char*)&s, sizeof(s));
    }
    fout.close();

    ifstream fin("students.dat", ios::binary);
    cout << "\nStudent Records from File:\n";
    while (fin.read((char*)&s, sizeof(s))) {
        cout << "Roll No: " << s.rollNo
             << ", Name: " << s.name
             << ", Marks: " << s.marks << endl;
    }
    fin.close();

    return 0;
}