#include <bits/stdc++.h>
using namespace std;

bool zeroSum(vector<int>& nums){

    unordered_set<int> s;
    int sum = 0;

    for(int x : nums){

        sum += x;

        if(sum == 0 || s.count(sum))
            return true;

        s.insert(sum);
    }

    return false;
}

int main(){

    vector<int> nums = {4,2,-3,1,6};

    if(zeroSum(nums))
        cout<<"Zero Sum Subarray Exists";
    else
        cout<<"No Zero Sum Subarray";

    return 0;
}
