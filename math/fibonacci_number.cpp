#include <iostream>
using namespace std;

// long fibo(int n) {
//     if (n>2)
//         return fibo(n-1) + fibo(n-2);
//     else
//         return 1;
// }

int fibo(int n) {
    return (n<2) ? n : fibo(n-1)+fibo(n-2);
}

int main(int argc, char const *argv[])
{
    cout<<"fibonacci_number is "<<fibo(44)<<endl;
    return 0;
}