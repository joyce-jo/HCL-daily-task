#include <iostream>
using namespace std;

namespace StudentData {

    struct Student {
        int id;
        string name;
    };

}

int main() {

    StudentData::Student s;

    s.id=101;
    s.name="Joyce";

    cout<<s.id<<" "<<s.name;

}