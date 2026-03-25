#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
using namespace std;

mutex m;
condition_variable cv;
bool ready = false;

void waitingThread() {
    unique_lock<mutex> lock(m);
    cout << "Waiting for signal..." << endl;

    cv.wait(lock, [] { return ready; });

    cout << "Signal received! Thread is proceeding." << endl;
}

void notifyingThread() {
    this_thread::sleep_for(chrono::seconds(2));

    {
        lock_guard<mutex> lock(m);
        ready = true;
        cout << "Sending signal after 2 seconds..." << endl;
    }

    cv.notify_one();
}

int main() {
    thread t1(waitingThread);
    thread t2(notifyingThread);

    t1.join();
    t2.join();

    return 0;
}