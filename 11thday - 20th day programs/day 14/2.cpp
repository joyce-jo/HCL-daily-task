#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {

    vector<int> productIDs = {101,102,103,101,104,102,105};

    unordered_map<int,int> freq;

    for(int id : productIDs)
        freq[id]++;

    cout << "Duplicate Product IDs:\n";

    for(auto x : freq) {
        if(x.second > 1)
            cout << x.first << " appears " << x.second << " times\n";
    }

}