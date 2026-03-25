#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> findPairs(vector<int>& arr, int target) {
    vector<pair<int, int>> result;
    
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            result.push_back({arr[left], arr[right]});
            left++;
            right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int target = 7;

    vector<pair<int, int>> pairs = findPairs(arr, target);

    for (auto p : pairs) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}