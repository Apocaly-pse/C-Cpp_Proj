#include <iostream>
using namespace std;


float gcd(int a, int b) {
    return b==0?a:gcd(b, a%b);
}

int main() {
    cout<<gcd(30, 24)<<endl;
    return 0;
}
