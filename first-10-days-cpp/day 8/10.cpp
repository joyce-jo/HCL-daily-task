#include <bits/stdc++.h>
using namespace std;

int mst(int n, vector<vector<pair<int,int>>> &graph){

    vector<int> key(n,INT_MAX);
    vector<bool> inMST(n,false);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    key[0] = 0;
    pq.push({0,0});

    int cost = 0;

    while(!pq.empty()){

        int u = pq.top().second;
        pq.pop();

        if(inMST[u]) continue;

        inMST[u] = true;
        cost += key[u];

        for(auto edge : graph[u]){

            int v = edge.first;
            int w = edge.second;

            if(!inMST[v] && w < key[v]){
                key[v] = w;
                pq.push({key[v],v});
            }
        }
    }

    return cost;
}

int main(){

    int n = 4;

    vector<vector<pair<int,int>>> graph(n);

    graph[0].push_back({1,10});
    graph[0].push_back({2,6});
    graph[0].push_back({3,5});
    graph[1].push_back({3,15});
    graph[2].push_back({3,4});

    cout<<"MST Cost: "<<mst(n,graph);

    return 0;
}
