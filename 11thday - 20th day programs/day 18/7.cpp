#include <iostream>
#include <vector>
using namespace std;

// Observer base class
class Observer {
public:
    virtual void update(float price) = 0;
    virtual ~Observer() {}
};

// Concrete observers
class MobileApp : public Observer {
public:
    void update(float price) {
        cout << "Mobile App: Stock price updated to " << price << endl;
    }
};

class WebApp : public Observer {
public:
    void update(float price) {
        cout << "Web App: Stock price updated to " << price << endl;
    }
};

class DesktopApp : public Observer {
public:
    void update(float price) {
        cout << "Desktop App: Stock price updated to " << price << endl;
    }
};

// Subject class
class Stock {
private:
    vector<Observer*> observers;
    float price;

public:
    Stock() {
        price = 0;
    }

    void attach(Observer* obs) {
        observers.push_back(obs);
    }

    void notify() {
        for (int i = 0; i < observers.size(); i++) {
            observers[i]->update(price);
        }
    }

    void setPrice(float newPrice) {
        price = newPrice;
        notify();
    }
};

int main() {
    Stock stock;

    MobileApp mobile;
    WebApp web;
    DesktopApp desktop;

    stock.attach(&mobile);
    stock.attach(&web);
    stock.attach(&desktop);

    stock.setPrice(150.5);
    cout << "-------------------" << endl;
    stock.setPrice(175.75);

    return 0;
}