#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    double x, y;

    Point(double a = 0, double b = 0) {
        x = a;
        y = b;
    }
};

class DistanceCalculator {
public:
    // Between two coordinate values
    double distance(double x1, double y1, double x2, double y2) {
        return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    }

    // Between two Point objects
    double distance(Point p1, Point p2) {
        return sqrt((p2.x - p1.x) * (p2.x - p1.x) +
                    (p2.y - p1.y) * (p2.y - p1.y));
    }

    // Between one Point and origin
    double distance(Point p) {
        return sqrt(p.x * p.x + p.y * p.y);
    }
};

int main() {
    DistanceCalculator d;
    Point p1(2, 3), p2(6, 7);

    cout << "Distance between coordinates: "
         << d.distance(1, 2, 4, 6) << endl;

    cout << "Distance between two point objects: "
         << d.distance(p1, p2) << endl;

    cout << "Distance between point and origin: "
         << d.distance(p1) << endl;

    return 0;
}