#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {

    vector<string> logs = {"INFO","ERROR","WARN","INFO","ERROR","INFO"};

    unordered_map<string,int> freq;

    for(string log : logs)
        freq[log]++;

    string mostCommon="";
    int maxCount=0;

    for(auto x : freq) {
        cout << x.first << " : " << x.second << endl;

        if(x.second > maxCount) {
            maxCount = x.second;
            mostCommon = x.first;
        }
    }

    cout << "Most common event: " << mostCommon;

}