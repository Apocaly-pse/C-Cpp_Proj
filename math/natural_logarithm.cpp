#include<iostream>
#include<iomanip>

using namespace std;

long double factorial(int n);

int main() {
    long double e = 1;
    for (long double i = 1; i < 2000; ++i) {
        e += 1 / factorial(i);
    }
    cout << fixed << setprecision(20) << e;
    // cout<<e;
}

long double factorial(int n) {
    long double result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}