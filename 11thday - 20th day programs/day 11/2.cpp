#include <iostream>
using namespace std;

#define LOG() cout << "FILE: " << __FILE__ \
                   << ", LINE: " << __LINE__ \
                   << ", FUNC: " << __func__ << endl;

void funA() {
    LOG();
}

void funB() {
    LOG();
}

int main() {
    LOG();
    funA();
    funB();
    return 0;
}