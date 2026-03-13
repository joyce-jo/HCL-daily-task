#include <iostream>
using namespace std;

class Teacher {
public:
    virtual void work() {
        cout << "Teaching students\n";
    }
};

class Researcher {
public:
    virtual void work() {
        cout << "Doing research\n";
    }
};

class Professor : public Teacher, public Researcher {
public:
    void work() override {
        cout << "Professor teaches and does research\n";
    }

    void showParentWork() {
        Teacher::work();
        Researcher::work();
    }
};

int main() {
    Professor p;
    p.work();
    p.showParentWork();

    return 0;
}