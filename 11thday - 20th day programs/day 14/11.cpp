#include <iostream>
using namespace std;

namespace MyErrors {

    class MyException {
    public:
        void message() {
            cout<<"Custom Exception Occurred";
        }
    };

}

int main() {

    try {
        throw MyErrors::MyException();
    }

    catch(MyErrors::MyException e) {
        e.message();
    }

}