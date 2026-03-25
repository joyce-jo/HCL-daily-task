#include <iostream>
using namespace std;

class Mobile {
protected:
    string brand;

public:
    void setBrand(string b) {
        brand = b;
    }
};

class Features : public Mobile {
protected:
    int ram;

public:
    void setRAM(int r) {
        ram = r;
    }
};

class SmartMobile : public Features {
    int storage;

public:
    void setStorage(int s) {
        storage = s;
    }

    void show() {
        cout << "Brand   : " << brand << endl;
        cout << "RAM     : " << ram << " GB" << endl;
        cout << "Storage : " << storage << " GB" << endl;
    }
};

int main() {
    SmartMobile m;
    m.setBrand("Samsung");
    m.setRAM(8);
    m.setStorage(128);
    m.show();

    return 0;
}