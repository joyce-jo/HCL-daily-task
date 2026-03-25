#include <iostream>
using namespace std;

int main() {
    long long address = 1000;   
    int* ptr = reinterpret_cast<int*>(address);

    cout << "Integer address = " << address << endl;
    cout << "Pointer value   = " << ptr << endl;

    
    return 0;
}