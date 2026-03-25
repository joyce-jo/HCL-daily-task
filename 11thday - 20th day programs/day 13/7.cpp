#include <iostream>
#include <regex>
using namespace std;

int main() {
    string ip = "192.168.1.1";

    regex pattern(R"(^(25[0-5]|2[0-4][0-9]|1[0-9]{2}|[1-9]?[0-9])(\.(25[0-5]|2[0-4][0-9]|1[0-9]{2}|[1-9]?[0-9])){3}$)");

    if(regex_match(ip,pattern))
        cout<<"Valid IP";
    else
        cout<<"Invalid IP";
}