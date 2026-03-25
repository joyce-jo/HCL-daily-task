#include <iostream>
#include <regex>
using namespace std;

int main() {
    string s="the the cat";

    regex pattern("\\b(\\w+)\\s+\\1\\b");

    if(regex_search(s,pattern))
        cout<<"Repeated word found";
    else
        cout<<"No repeated word";
}