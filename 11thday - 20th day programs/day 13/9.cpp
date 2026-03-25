#include <iostream>
#include <regex>
using namespace std;

int main() {
    string post="Learning #cpp and #regex today";

    regex pattern("#\\w+");
    sregex_iterator it(post.begin(),post.end(),pattern);
    sregex_iterator end;

    while(it!=end) {
        cout<<it->str()<<endl;
        it++;
    }
}