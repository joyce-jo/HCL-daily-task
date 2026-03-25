#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

string normalize(string s) {
    for(char &c:s)
        c=tolower(c);

    sort(s.begin(),s.end());
    return s;
}

int main() {

    vector<string> words={"listen","silent","enlist","rat","tar"};

    map<string,vector<string>> groups;

    for(string w:words)
        groups[normalize(w)].push_back(w);

    for(auto g:groups) {
        for(string w:g.second)
            cout<<w<<" ";
        cout<<endl;
    }
}