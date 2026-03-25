#include <iostream>
#include <string>
using namespace std;

class Logger {
private:

    Logger() {}

   
    static Logger* instance;

public:
    
    static Logger* getInstance() {
        if (instance == NULL) {
            instance = new Logger();
        }
        return instance;
    }

   
    void logMessage(const string& msg) {
        cout << "Log: " << msg << endl;
    }
};


Logger* Logger::instance = NULL;

int main() {
    Logger* logger1 = Logger::getInstance();
    logger1->logMessage("Application started");

    Logger* logger2 = Logger::getInstance();
    logger2->logMessage("User logged in");

    
    if (logger1 == logger2) {
        cout << "Same instance (Singleton works)" << endl;
    }

    return 0;
}