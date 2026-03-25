#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int value;
    double ratio;
};

bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

int main() {
    int n, W;

    cout << "Enter number of items: ";
    cin >> n;

    Item items[100];

    cout << "Enter weight and value of each item:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> items[i].weight >> items[i].value;
        items[i].ratio = (double)items[i].value / items[i].weight;
    }

    cout << "Enter knapsack capacity: ";
    cin >> W;

    sort(items, items + n, compare);

    double maxValue = 0.0;

    for (int i = 0; i < n; i++) {
        if (W >= items[i].weight) {
            W -= items[i].weight;
            maxValue += items[i].value;
        } else {
            maxValue += items[i].ratio * W;
            break;
        }
    }

    cout << "Maximum value in knapsack = " << maxValue << endl;

    return 0;
}