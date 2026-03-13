#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums){

    vector<int> dp;

    for(int n : nums){

        auto it = lower_bound(dp.begin(), dp.end(), n);

        if(it == dp.end())
            dp.push_back(n);
        else
            *it = n;
    }

    return dp.size();
}

int main(){

    vector<int> nums = {10,9,2,5,3,7,101,18};

    cout<<"LIS Length: "<<lengthOfLIS(nums);

    return 0;
}
