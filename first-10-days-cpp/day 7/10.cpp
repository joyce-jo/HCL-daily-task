#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows){

    if(numRows == 1) return s;

    vector<string> rows(min(numRows,(int)s.size()));

    int curr = 0;
    bool down = false;

    for(char c : s){

        rows[curr] += c;

        if(curr == 0 || curr == numRows-1)
            down = !down;

        curr += down ? 1 : -1;
    }

    string res;

    for(string r : rows)
        res += r;

    return res;
}

int main(){

    string s = "PAYPALISHIRING";
    int rows = 3;

    cout<<"Zigzag: "<<convert(s,rows);

    return 0;
}
