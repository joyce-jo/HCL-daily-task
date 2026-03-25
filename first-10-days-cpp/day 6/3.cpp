#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {

    unordered_map<int,int> freq;

    for(int n : nums)
        freq[n]++;

    vector<pair<int,int>> arr;

    for(auto it : freq)
        arr.push_back({it.second, it.first});

    sort(arr.rbegin(), arr.rend());

    vector<int> res;

    for(int i=0;i<k;i++)
        res.push_back(arr[i].second);

    return res;
}

int main(){

    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;

    vector<int> result = topKFrequent(nums,k);

    cout<<"Top K Frequent Elements: ";

    for(int x : result)
        cout<<x<<" ";

    return 0;
}
