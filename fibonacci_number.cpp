#include <iostream>
using namespace std;

long fibo(int n) {
    if (n>2)
        return fibo(n-1) + fibo(n-2);
    else
        return 1;
}

int main(int argc, char const *argv[])
{
    cout<<"fibonacci_number is "<<fibo(11)<<endl;
    return 0;
}