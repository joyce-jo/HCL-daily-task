#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void task1() {
    cout << "Task 1 started" << endl;

    this_thread::sleep_for(chrono::seconds(2));

    cout << "Task 1 resumed after sleeping for 2 seconds" << endl;
}

void task2() {
    cout << "Task 2 started" << endl;

    this_thread::yield();

    cout << "Task 2 resumed after yielding" << endl;
}

int main() {
    thread t1(task1);
    thread t2(task2);

    t1.join();
    t2.join();

    return 0;
}