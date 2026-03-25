#include <iostream>
#include <regex>
using namespace std;

int main() {
    string url="https://example.com";

    regex pattern(R"(^(https?:\/\/)[\w.-]+\.[a-zA-Z]{2,})");

    if(regex_match(url,pattern))
        cout<<"Valid URL";
    else
        cout<<"Invalid URL";
}