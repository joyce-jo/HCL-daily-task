#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums){

    int ops = 0;

    for(int x : nums)
        ops += abs(x);

    return ops;
}

int main(){

    vector<int> nums = {1,-2,3};

    cout<<"Minimum Operations: "<<minOperations(nums);

    return 0;
}
