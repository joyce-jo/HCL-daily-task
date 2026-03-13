#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){

    unordered_map<int,int> m;

    for(int i=0;i<nums.size();i++){

        int diff = target - nums[i];

        if(m.count(diff))
            return {m[diff], i};

        m[nums[i]] = i;
    }

    return {};
}

int main(){

    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> res = twoSum(nums,target);

    cout<<"Indices: "<<res[0]<<" "<<res[1];

    return 0;
}
