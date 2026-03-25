#include <iostream>
#include <thread>
using namespace std;

int main() {
    thread t([]() {
        cout << "Current Thread ID: " << this_thread::get_id() << endl;
    });

    t.join();

    return 0;
}