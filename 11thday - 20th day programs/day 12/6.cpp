#include <iostream>
using namespace std;

struct Flags {
    unsigned int isAdmin : 1;
    unsigned int isActive : 1;
    unsigned int isVerified : 1;
};

int main() {
    Flags f;
    f.isAdmin = 1;
    f.isActive = 0;
    f.isVerified = 1;

    cout << "isAdmin: " << f.isAdmin << endl;
    cout << "isActive: " << f.isActive << endl;
    cout << "isVerified: " << f.isVerified << endl;

    return 0;
}