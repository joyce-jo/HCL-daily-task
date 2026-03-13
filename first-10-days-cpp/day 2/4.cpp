#include <iostream>
using namespace std;

class EncryptBox {
private:
    string privateKey;
    int secretCode;

public:
    EncryptBox(string key, int code) {
        privateKey = key;
        secretCode = code;
    }

    friend void DumpForAudit(const EncryptBox &box);
};

void DumpForAudit(const EncryptBox &box) {
    cout << "Audit Access:\n";
    cout << "Private Key = " << box.privateKey << endl;
    cout << "Secret Code = " << box.secretCode << endl;
}

// Regular function cannot access private members
/*
void NormalFunction(const EncryptBox &box) {
    cout << box.privateKey;   // ERROR
}
*/

int main() {
    EncryptBox e("ABC123XYZ", 9999);
    DumpForAudit(e);

    cout << "Regular function cannot access private members directly.\n";

    return 0;
} 	