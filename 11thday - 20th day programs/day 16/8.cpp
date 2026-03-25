#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

bool canCut(const vector<double>& ropes, double length, int k) {
    int pieces = 0;
    for (int i = 0; i < ropes.size(); i++) {
        pieces += (int)(ropes[i] / length);
    }
    return pieces >= k;
}

double maxRopeLength(vector<double>& ropes, int k) {
    double low = 0.0;
    double high = 0.0;

    for (int i = 0; i < ropes.size(); i++) {
        if (ropes[i] > high)
            high = ropes[i];
    }

    for (int iter = 0; iter < 100; iter++) {
        double mid1 = low + (high - low) / 3.0;
        double mid2 = high - (high - low) / 3.0;

        if (canCut(ropes, mid1, k))
            low = mid1;
        else
            high = mid2;
    }

    return low;
}

int main() {
    int n, k;
    cout << "Enter number of ropes: ";
    cin >> n;

    vector<double> ropes(n);
    cout << "Enter rope lengths:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> ropes[i];
    }

    cout << "Enter target number of pieces: ";
    cin >> k;

    double ans = maxRopeLength(ropes, k);

    cout << fixed << setprecision(6);
    cout << "Maximum possible length: " << ans << endl;

    return 0;
}