#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {

    vector<int> arr={1,1,2,2,2,3,4};

    unordered_map<int,int> freq;

    for(int x:arr)
        freq[x]++;

    sort(arr.begin(),arr.end(),
        [&](int a,int b){
            if(freq[a]!=freq[b])
                return freq[a]>freq[b];
            return a<b;
        });

    for(int x:arr)
        cout<<x<<" ";
}