#include <iostream>
using namespace std;

namespace Company {

    namespace HR {

        void displayPolicy() {
            cout<<"HR Policy Displayed";
        }
    }
}

int main() {

    Company::HR::displayPolicy();

}