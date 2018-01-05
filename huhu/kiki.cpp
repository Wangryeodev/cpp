#include <iostream>

using namespace std;

int main(){
    // Test some variables to debug
    int a, b;
    a = 10; b = 20;
    a = 20 + a,
    b = a + 20 + b;
    cout << a << endl;
    cout << b << endl;
    return 0;
}
