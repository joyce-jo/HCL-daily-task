#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s1,string s2) {

    if(s1.length()!=s2.length())
        return false;

    unordered_map<char,int> freq;

    for(char c:s1)
        freq[c]++;

    for(char c:s2) {
        freq[c]--;
        if(freq[c]<0)
            return false;
    }

    return true;
}

int main() {
    string a="listen";
    string b="silent";

    if(isAnagram(a,b))
        cout<<"Anagram";
    else
        cout<<"Not anagram";
}