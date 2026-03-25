#include <bits/stdc++.h>
using namespace std;

int longestAlt(string s, int k){

    int l = 0, flips = 0, ans = 0;

    for(int r=1;r<s.size();r++){

        if(s[r] == s[r-1])
            flips++;

        while(flips > k){

            if(l+1 < s.size() && s[l] == s[l+1])
                flips--;

            l++;
        }

        ans = max(ans, r-l+1);
    }

    return ans;
}

int main(){

    string s = "00110011";
    int k = 1;

    cout<<"Longest Alternating Length: "<<longestAlt(s,k);

    return 0;
}
