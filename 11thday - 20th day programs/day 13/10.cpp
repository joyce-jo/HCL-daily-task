#include <iostream>
#include <regex>
using namespace std;

int main() {
    string phone="1234567890";

    regex pattern("(\\d{3})(\\d{3})(\\d{4})");

    string result=regex_replace(phone,pattern,"($1) $2-$3");

    cout<<result;
}