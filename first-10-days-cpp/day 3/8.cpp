#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file("linecount.txt", ios::out);
    file << "First line\n";
    file << "Second line\n";
    file << "Third line\n";
    file.close();

    file.open("linecount.txt", ios::in);
    string line;
    int count = 0;

    while (getline(file, line)) {
        count++;
    }
    file.close();

    file.open("linecount.txt", ios::app);
    file << "Total number of lines = " << count << endl;
    file.close();

    file.open("linecount.txt", ios::in);
    cout << "File Content:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();

    return 0;
}