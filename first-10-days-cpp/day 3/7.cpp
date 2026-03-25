#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout("sample.txt");

    if (fout.is_open()) {
        fout << "Hello Joyce\n";
        fout << "This is file handling in C++\n";
        fout.close();
        cout << "Data written successfully\n";
    } else {
        cout << "File could not be opened for writing\n";
        return 1;
    }

    ifstream fin("sample.txt");
    if (fin.is_open()) {
        string line;
        cout << "\nReading file content:\n";
        while (getline(fin, line)) {
            cout << line << endl;
        }
        fin.close();
    } else {
        cout << "File could not be opened for reading\n";
    }

    return 0;
}