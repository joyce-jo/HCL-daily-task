#include <iostream>
#include <cassert>
using namespace std;

#define SQR_BAD(x) x * x
#define SQR(x) ((x) * (x))

inline int sqrFunc(int x) {
    return x * x;
}

void testSQR() {
    int a = 2, b = 3;

    int badMacro = SQR_BAD(a + b);   
    int goodMacro = SQR(a + b);      
    int inlineAns = sqrFunc(a + b);  

    cout << "Bad macro result  : " << badMacro << endl;
    cout << "Good macro result : " << goodMacro << endl;
    cout << "Inline result     : " << inlineAns << endl;

    assert(goodMacro == inlineAns);
    cout << "Unit test passed: good macro == inline function" << endl;
}

int main() {
    testSQR();
    return 0;
}