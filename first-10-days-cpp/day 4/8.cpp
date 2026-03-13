#include <iostream>
using namespace std;

struct Process {
    int id;
    int burstTime;
};

int main() {
    int n, tq;
    cout << "Enter number of processes: ";
    cin >> n;

    Process p[100];
    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cout << "Enter burst time for Process " << p[i].id << ": ";
        cin >> p[i].burstTime;
    }

    cout << "Enter time quantum: ";
    cin >> tq;

    int rem[100];
    for (int i = 0; i < n; i++) {
        rem[i] = p[i].burstTime;
    }

    int time = 0;
    bool done;

    cout << "\nExecution Order:\n";

    do {
        done = true;

        for (int i = 0; i < n; i++) {
            if (rem[i] > 0) {
                done = false;

                if (rem[i] > tq) {
                    cout << "Process " << p[i].id << " executes for " << tq << " units\n";
                    time += tq;
                    rem[i] -= tq;
                } else {
                    cout << "Process " << p[i].id << " executes for " << rem[i] << " units\n";
                    time += rem[i];
                    rem[i] = 0;
                }
            }
        }
    } while (!done);

    cout << "Total time = " << time << endl;

    return 0;
}