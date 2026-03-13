#include <iostream>
using namespace std;

class ValidAuditor;  

class Valid {
private:
    double balance;

public:
    Valid(double b = 0) {
        balance = b;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal\n";
        }
    }

    friend class ValidAuditor;
};

class ValidAuditor {
public:
    void report(const Valid &v) {
        cout << "Auditor Report -> Balance = " << v.balance << endl;
    }
};

class ThirdClass {
public:
    void tryAccess(const Valid &v) {
       
        cout << "Third class cannot access private balance directly\n";
    }
};

int main() {
    Valid acc(1000);
    acc.deposit(500);
    acc.withdraw(200);

    ValidAuditor auditor;
    auditor.report(acc);

    ThirdClass t;
    t.tryAccess(acc);

    return 0;
}