#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void openFile(string filename) {
    ifstream file(filename);
    if (!file) {
        throw string("Cannot open file: " + filename);
    }
    cout << "File opened successfully" << endl;
}

int main() {
    try {
        openFile("data.txt");
    }
    catch (string msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}