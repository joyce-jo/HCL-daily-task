#include <bits/stdc++.h>
using namespace std;

int maxRevenue(vector<int>& bandwidth, vector<int>& revenue, int limit){

    int n = bandwidth.size();

    vector<vector<int>> dp(n+1, vector<int>(limit+1,0));

    for(int i=1;i<=n;i++){

        for(int w=0;w<=limit;w++){

            if(bandwidth[i-1] <= w)
                dp[i][w] = max(dp[i-1][w],
                               revenue[i-1] + dp[i-1][w-bandwidth[i-1]]);
            else
                dp[i][w] = dp[i-1][w];
        }
    }

    return dp[n][limit];
}

int main(){

    vector<int> bandwidth = {2,3,4};
    vector<int> revenue = {40,50,60};
    int limit = 5;

    cout<<"Maximum Revenue: "<<maxRevenue(bandwidth,revenue,limit);

    return 0;
}
