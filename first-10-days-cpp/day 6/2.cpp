#include <bits/stdc++.h>
using namespace std;

int peakSessions(vector<pair<int,int>> &sessions) {
    vector<pair<int,int>> events;

    for(auto s : sessions){
        events.push_back({s.first,1});
        events.push_back({s.second,-1});
    }

    sort(events.begin(), events.end());

    int curr = 0, peak = 0;

    for(auto e : events){
        curr += e.second;
        peak = max(peak, curr);
    }

    return peak;
}

int main(){

    vector<pair<int,int>> sessions = {
        {1,5},
        {2,6},
        {4,7},
        {5,8}
    };

    cout<<"Peak Concurrent Sessions: "<<peakSessions(sessions);

    return 0;
}
