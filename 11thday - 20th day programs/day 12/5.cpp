#include <iostream>
using namespace std;

enum Role {
    GUEST = 0,
    USER = 1,
    ADMIN = 2,
    SUPERADMIN = 3
};

struct UserAccess {
    unsigned int role : 2;      
    unsigned int canRead : 1;
    unsigned int canWrite : 1;
    unsigned int canDelete : 1;
};

int main() {
    UserAccess u;
    u.role = ADMIN;
    u.canRead = 1;
    u.canWrite = 1;
    u.canDelete = 0;

    cout << "Role: " << u.role << endl;
    cout << "Read: " << u.canRead << endl;
    cout << "Write: " << u.canWrite << endl;
    cout << "Delete: " << u.canDelete << endl;

    return 0;
}