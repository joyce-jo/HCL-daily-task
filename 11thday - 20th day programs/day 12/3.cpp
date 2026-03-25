#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

bool isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

bool isValidDate(int d, int m, int y) {
    if (y < 1 || m < 1 || m > 12 || d < 1)
        return false;

    int daysInMonth[] = {31, 28, 31, 30, 31, 30,
                         31, 31, 30, 31, 30, 31};

    if (isLeap(y))
        daysInMonth[1] = 29;

    return d <= daysInMonth[m - 1];
}

Date getDate() {
    Date dt;
    do {
        cout << "Enter day month year: ";
        cin >> dt.day >> dt.month >> dt.year;

        if (!isValidDate(dt.day, dt.month, dt.year))
            cout << "Invalid date. Re-enter.\n";

    } while (!isValidDate(dt.day, dt.month, dt.year));

    return dt;
}

int main() {
    Date d = getDate();
    cout << "Valid Date: " << d.day << "/" << d.month << "/" << d.year << endl;
    return 0;
}