#include <bits/stdc++.h>
using namespace std;

int shortestPath(int n, vector<vector<pair<int,int>>> &graph, int src, int dest){

    vector<int> dist(n, INT_MAX);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    dist[src] = 0;

    pq.push({0,src});

    while(!pq.empty()){

        auto top = pq.top();
        pq.pop();

        int d = top.first;
        int u = top.second;

        for(auto edge : graph[u]){

            int v = edge.first;
            int w = edge.second;

            if(dist[v] > d + w){

                dist[v] = d + w;
                pq.push({dist[v],v});
            }
        }
    }

    return dist[dest];
}

int main(){

    int n = 5;

    vector<vector<pair<int,int>>> graph(n);

    graph[0].push_back({1,2});
    graph[0].push_back({2,4});
    graph[1].push_back({2,1});
    graph[1].push_back({3,7});
    graph[2].push_back({4,3});

    cout<<"Shortest Path: "<<shortestPath(n,graph,0,4);

    return 0;
}
