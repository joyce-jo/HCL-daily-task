#include <iostream>
#include <regex>
using namespace std;

int main() {
    string s = "APPLE";
    regex pattern("apple", regex_constants::icase);

    if(regex_match(s,pattern))
        cout<<"Match";
    else
        cout<<"No match";
}