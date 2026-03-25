#include <iostream>
#include <cassert>
using namespace std;

void printCompilerVersion() {
#ifdef __GNUC__
    cout << "Compiler: GCC/Clang compatible" << endl;
    cout << "Version: " << __VERSION__ << endl;
#else
    cout << "Compiler version macro not available" << endl;
#endif
}

#define MY_ASSERT(cond) \
    if (!(cond)) { \
        cout << "Assertion failed!" << endl; \
        cout << "FILE: " << __FILE__ << ", LINE: " << __LINE__ << endl; \
        cout << "Compiler Version: " << __VERSION__ << endl; \
    }

int main() {
    printCompilerVersion();

    int x = 10;
    MY_ASSERT(x == 10);   
    MY_ASSERT(x == 5);    

    return 0;
}