#include <iostream>
#include <regex>
using namespace std;

int main() {
    string s = "12345";
    regex pattern("^[0-9]+$");

    if(regex_match(s,pattern))
        cout<<"Valid";
    else
        cout<<"Invalid";
}