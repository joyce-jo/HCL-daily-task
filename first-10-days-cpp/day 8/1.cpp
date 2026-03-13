#include <bits/stdc++.h>
using namespace std;

int minPlans(vector<int>& plans, int target) {

    vector<int> dp(target+1, INT_MAX);
    dp[0] = 0;

    for(int p : plans){
        for(int i = target; i >= p; i--){
            if(dp[i-p] != INT_MAX)
                dp[i] = min(dp[i], dp[i-p] + 1);
        }
    }

    return dp[target] == INT_MAX ? -1 : dp[target];
}

int main(){

    vector<int> plans = {1,3,5};
    int target = 7;

    cout<<"Minimum Plans: "<<minPlans(plans,target);

    return 0;
}
