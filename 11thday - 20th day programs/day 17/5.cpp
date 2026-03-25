#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Observer {
public:
    virtual void update(float price) = 0;
    virtual ~Observer() {}
};


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

    void setPrice(float newPrice) {
        price = newPrice;
        notify();
    }

    void notify() {
        for (int i = 0; i < observers.size(); i++) {
            observers[i]->update(price);
        }
    }
};

int main() {
    Stock stock;

    MobileApp m;
    WebApp w;
    DesktopApp d;

    stock.attach(&m);
    stock.attach(&w);
    stock.attach(&d);

    stock.setPrice(150.5);
    cout << "----" << endl;
    stock.setPrice(175.75);

    return 0;
}